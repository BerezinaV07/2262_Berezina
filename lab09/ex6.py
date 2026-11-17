def gen(x):
    yield x
    while x!=1:
        if x%2==0:
            x//=2
        else:
            x=3*x+1
        yield(x)

def every_other(seq):
    it=iter(seq)
    x=next(it, None)
    while x!=None:
        yield x
        x=next(it, None)
        x=next(it, None)
        
