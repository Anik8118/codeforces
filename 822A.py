x,y = map(int,input().split())
c=1
result=min(x,y)
while result>0:
    c*=result
    result-=1
print(c)