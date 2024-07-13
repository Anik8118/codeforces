t=int(input())
a=input()
b=input()
c=0
for x in range(t):
    c+=min(10-abs(ord(a[x])-ord(b[x])),abs(ord(a[x])-ord(b[x])))
print(c)