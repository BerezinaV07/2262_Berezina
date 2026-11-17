def every_other(seq):
    it=iter(seq)
    x=next(it, None)
    while x!=None:
        yield x
        x=next(it, None)
        x=next(it, None)
