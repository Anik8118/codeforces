import math
for t in range(int(input())):
    n=int(input())
    if n==1:
        print(2)
    elif n%3!=0:
        print(math.floor(n/3+1))
    else:
        print(math.floor(n/3))