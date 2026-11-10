import sys,struct
from unicorn import *
from unicorn.arm_const import *
IMG=open('/home/user/btm_firm_recomp/reference/nrf51822_xxac.bin','rb').read()
BUS={0x20002094:'TWI1',0x2000208c:'TWI0'}
class Emu:
    def __init__(s, rx=None, quiet=False):
        s.log=[]; s.rxq=rx or {}; s.quiet=quiet; s.insn=0; s.us=0
        u=s.u=Uc(UC_ARCH_ARM,UC_MODE_THUMB|UC_MODE_MCLASS)
        u.mem_map(0x0,0x40000); u.mem_write(0x1b000,IMG)
        u.mem_map(0x20000000,0x8000)
        u.mem_write(0x20002028,IMG[0x340a0-0x1b000:0x340a0-0x1b000+0x110])
        u.mem_map(0x40000000,0x20000); u.mem_map(0x50000000,0x1000); u.mem_map(0xE000E000,0x1000); u.mem_map(0x10000000,0x2000)
        u.mem_map(0xFFFF0000,0x1000)
        s.stubs={0x1eeac:s.tx,0x1ef70:s.rx,0x1b210:s.err,0x1bb3c:s.tcreate,0x1bb68:s.tstart,0x1bc28:s.tstop,
                 0x1b27c:s.sched,0x1f724:s.nop,0x269b8:s.fsm, 0x25bc4:s.nop0}
        u.hook_add(UC_HOOK_CODE,s.code)
        u.hook_add(UC_HOOK_MEM_WRITE,s.pw,begin=0x50000000,end=0x50001000)
        s.regs={}
    def r(s,n): return s.u.reg_read(n)
    def ret(s,v=0):
        s.u.reg_write(UC_ARM_REG_R0,v); s.u.reg_write(UC_ARM_REG_PC,s.r(UC_ARM_REG_LR)|1)
    def out(s,t):
        t='[%8.1f ms] '%(s.insn/12000)+t; s.log.append(t)
        if not s.quiet: print(t)
    def pw(s,u,acc,addr,size,val,ud):
        n={0x504:'OUT',0x508:'OUTSET',0x50c:'OUTCLR',0x514:'DIR',0x518:'DIRSET',0x51c:'DIRCLR'}.get(addr&0xfff)
        if n is None and 0x700<=(addr&0xfff)<0x780: n='PIN_CNF[%d]'%(((addr&0xfff)-0x700)//4)
        if n in('OUTSET','OUTCLR'): v='pins '+','.join(str(i) for i in range(32) if val>>i&1)
        else: v=hex(val)
        s.out('   GPIO %s = %s'%(n or hex(addr),v))
    def code(s,u,addr,size,ud):
        s.insn+=1
        f=s.stubs.get(addr)
        if f: f()
    def tx(s):
        bus=BUS.get(s.r(UC_ARM_REG_R0),hex(s.r(UC_ARM_REG_R0))); a=s.r(UC_ARM_REG_R1); p=s.r(UC_ARM_REG_R2); n=s.r(UC_ARM_REG_R3)
        d=bytes(s.u.mem_read(p,n))
        key=(bus,a)
        if n==1: s.last=(key,d[0])
        else:
            s.regs[(bus,a,d[0])]=d[1]
            s.out('%s %02x W reg %02x = %s'%(bus,a,d[0],d[1:].hex(' ')))
        s.ret(0)
    def rx(s):
        bus=BUS.get(s.r(UC_ARM_REG_R0)); a=s.r(UC_ARM_REG_R1); p=s.r(UC_ARM_REG_R2); n=s.r(UC_ARM_REG_R3)
        key,reg=s.last
        v=s.rxq.get((bus,a,reg))
        if isinstance(v,list): v=v.pop(0) if v else 0
        if v is None: v=s.regs.get((bus,a,reg),0)
        s.u.mem_write(p,bytes([v]*n))
        s.out('%s %02x R reg %02x -> %02x'%(bus,a,reg,v)); s.ret(0)
    def err(s): s.out('!! app_error_handler code=%x line=%d'%(s.r(UC_ARM_REG_R0),s.r(UC_ARM_REG_R1))); s.ret(0)
    def tcreate(s):
        p=s.r(UC_ARM_REG_R0); idp=struct.unpack('<I',s.u.mem_read(p,4))[0]
        s.out('app_timer_create(id@%x->%x, mode=%d, handler=%x)'%(p,idp,s.r(UC_ARM_REG_R1),s.r(UC_ARM_REG_R2))); s.ret(0)
    def tstart(s):
        t=s.r(UC_ARM_REG_R1); s.out('app_timer_start(%x, ticks=%d (%.1f ms))'%(s.r(UC_ARM_REG_R0),t,t*1000/32768)); s.ret(0)
    def tstop(s): s.out('app_timer_stop(%x)'%s.r(UC_ARM_REG_R0)); s.ret(0)
    def sched(s):
        p=s.r(UC_ARM_REG_R0); n=s.r(UC_ARM_REG_R1)
        s.out('app_sched_event_put(%s, handler=%x)'%(bytes(s.u.mem_read(p,n)).hex(' '),s.r(UC_ARM_REG_R2))); s.ret(0)
    def nop(s): s.ret(0)
    def nop0(s): s.out('notify_sys_state(%x)'%s.r(UC_ARM_REG_R0)); s.ret(0)
    def fsm(s): s.out('fsm_dispatch_event(0x%x)'%s.r(UC_ARM_REG_R0)); s.ret(0)
    def call(s,addr,*args,maxi=80_000_000):
        u=s.u
        for i,a in enumerate(args): u.reg_write([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3][i],a&0xffffffff)
        u.reg_write(UC_ARM_REG_SP,0x20007f00); u.reg_write(UC_ARM_REG_LR,0xFFFF0001)
        s.insn=0
        if not s.quiet: print('--- call %x%s'%(addr,tuple(hex(a) for a in args)))
        try: u.emu_start(addr|1,0xFFFF0000,count=maxi)
        except UcError as e:
            if u.reg_read(UC_ARM_REG_PC)&~1!=0xFFFF0000: print("EMU ERR",e,hex(u.reg_read(UC_ARM_REG_PC)))
        if not s.quiet: print('    -> r0=%x  (%d insns)'%(s.r(UC_ARM_REG_R0),s.insn))
        return s.r(UC_ARM_REG_R0)
    def wb(s,a,b): s.u.mem_write(a,bytes(b))
    def rb(s,a,n): return bytes(s.u.mem_read(a,n))
