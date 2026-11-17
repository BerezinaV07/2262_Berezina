# Python 4

## Exercise 1
```
n=int(input())

def isPrime(x):
    if x<2:
        return False
    if x==2:
        return True
    if x%2==0:
        return False
    d=3
    while d*d<=x:
        if x%d==0:
            return False
        d+=2
    return True

cnt=0
num=2
while True:
    if isPrime(num):
        cnt+=1
        if cnt==n:
            print(num)
            break
    num+=1
```

## Exercise 2
```
n=int(input())
a=list(map(int,input().split()))
s=set()
r=n
for i,d in enumerate(a,1):
    s.add(d)
    if len(s)==3:
        r=i
        break
print(r)
```

## Exercise 3
```
from string import ascii_lowercase
s=input()
best=s[0]
best_count=s.count(best)
for c in ascii_lowercase:
    cnt=s.count(c)
    if cnt>best_count:
        best_count=cnt
        best=c
print(s.replace(best,""))
```

## Exercise 4
```
rows=["1234567890","qwertyuiop","asdfghjkl","zxcvbnm"]
n=int(input())
for i in range(n):
    p=input()
    ok=True
    for r in rows:
        found=False
        for c in p:
            if c in r:
                found=True
                break
        if not found:
            ok=False
            break
    if ok:
        print("strong")
    else:
        print("weak")
```

## Exercise 5
```
suit=input()
ranks={"6":0,"7":1,"8":2,"9":3,"10":4,"Jack":5,"Queen":6,"King":7,"Ace":8}
n=int(input())
res=[]
for i in range(n):
    a=input().split()
    b=input().split()
    ra,sa=a[0],a[1]
    rb,sb=b[0],b[1]
    beat=False
    if sb==sa and ranks[rb]>ranks[ra]:
        beat=True
    if sb==suit and sa!=suit:
        beat=True
    res.append("1" if beat else "0")
print(" ".join(res))
```



