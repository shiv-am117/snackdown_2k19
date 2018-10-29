
t=int(raw_input())
for i in range(0,t):
    n,k=[int(x) for x in raw_input().split()]
    a=[i for i in range(1,k+1)]
    prod=k*(k+1)
    prod=prod/2
    if(prod>n):
        print -1
        continue
    d=n-prod
    if(d<k):
        print 0
        continue
    add1=d/k
    add2=d%k
    l=1
    ans=1
    mod=10**9+7
    for j in range(k-1,-1,-1):
        a[j]=a[j]+add1
        if(l<=add2):
            a[j]=a[j]+1
            l=l+1
        ans=ans*a[j]*(a[j]-1)%mod
    
    
        
    print ans
    
