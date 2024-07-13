for i in range(int(input())):
    x = int(input())
    ans=x
    while x>1:
        ans+=x//2
        x=x//2
    print(ans)