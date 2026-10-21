import struct,re,sys
d=open(sys.argv[1],'rb').read();B=0x1b000
u32=lambda a:struct.unpack_from('<I',d,a-B)[0]
lst=[l for l in open(sys.argv[2]).read().splitlines()]
idx={int(l[:8],16):i for i,l in enumerate(lst) if re.match(r'[0-9a-f]{8}:',l)}
states=[u32(0x333a4+4*i)&~1 for i in range(21)]
for s,e in enumerate(states):
    i=idx.get(e); bound=None; out=None
    if i is None: print(s,hex(e),'?'); continue
    for l in lst[i:i+12]:
        m=re.search(r'cmp\s+r\d, #(0x[0-9a-f]+|\d+)$',l)
        if m: bound=int(m.group(1),0)
        m=re.search(r'; =0x(00033[0-9a-f]{3})',l)
        if m and 'ldr' in l:
            t=int(m.group(1),16); out=t; break
    if out is None or bound is None: print(s,hex(e),"inline handler"); continue
    ents=[u32(out+4*k)&~1 for k in range(bound+1)]
    from collections import Counter
    c=Counter(ents); dflt=c.most_common(1)[0][0]
    print('state',s,hex(e),'table',hex(out),'max ev',hex(bound),'default',hex(dflt))
    print('   ',' '.join(f'{k:#x}:{v:#x}' for k,v in enumerate(ents) if v!=dflt))
