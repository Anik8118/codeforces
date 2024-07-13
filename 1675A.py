t=int(input())
for test in range(t):
    a,b,c,x,y=map(int,input().split())
    z1=max(0,x-a)
    z2=max(0,y-b)
    if (z1+z2)<=c:
        print("YES")
    else:
        print("NO")