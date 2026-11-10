import sys,struct
d=open('/home/user/btm_firm_recomp/reference/nrf51822_xxac.bin','rb').read()
def off(a):
    if a>=0x20002028: return a-0x20002028+0x340a0-0x1b000
    return a-0x1b000
def w(a,n): return ' '.join('%08x'%x for x in struct.unpack('<%dI'%n,d[off(a):off(a)+4*n]))
def b(a,n): return d[off(a):off(a)+n].hex(' ')
if __name__=='__main__':
    m=sys.argv[1]; a=int(sys.argv[2],16); n=int(sys.argv[3],0)
    print(w(a,n) if m=='w' else b(a,n))
