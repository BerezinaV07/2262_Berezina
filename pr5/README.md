#Python 5

##Exercise 1
```
n,m=map(int,input().split())
a=list(map(float,input().split()))
for j in range(m):
    b=[0.0]*n
    b[0]=(2*a[0]+a[1])/3
    b[n-1]=(2*a[n-1]+a[n-2])/3
    for i in range(1,n-1):
        b[i]=(a[i-1]+a[i]+a[i+1])/3
    a=b
print(' '.join(f'{x:.6f}' for x in a))
```

##Exercise 2
```
n=int(input())
a=list(map(int,input().split()))
a.sort(key=lambda x:abs(x)*2+(0 if x<0 else 1))
print(' '.join(map(str,a)))
```

##Exercise 3
```
s=input().strip()
n=int(input())
d={}
for j in range(n):
    k=input().strip()
    v=input().strip()
    d[k]=v
for i in range(1,len(s)):
    a=s[:i]
    b=s[i:]
    if a in d and b in d:
        print(d[a]+d[b])
        break
```

##Exercise 4
```
n,m=map(int,input().split())
a=[]
for e in range(n):
    a.append(list(map(int,input().split())))
for j in range(m):
    row=[]
    for i in range(n):
        row.append(str(a[i][j]))
    print(' '.join(row))
```

##Exercise51
```
import math
def key(t):
    k,x,y=t
    if k%2==0:
        return (k,y,x)
    else:
        return (k,-y,x)
    
w,h,s=map(int,input().split())
n=int(input())
trees=[]
for j in range(n):
    x,y=map(int,input().split())
    k=x//s
    trees.append((k,x,y))
trees.sort(key=key)
ans=0.0
for i in range(1,n):
    dx=trees[i][1]-trees[i-1][1]
    dy=trees[i][2]-trees[i-1][2]
    ans+=math.sqrt(dx*dx + dy*dy)

print(f"{ans:.10f}")
```


