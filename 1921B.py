t=int(input())
while t>0:
    n=int(input())
    str1=input()
    str2=input()
    count1,count2,c,ans=0,0,0,0
    for i in range(n):
        if str1[i]=='1':
            count1+=1
        if str2[i]=='1':
            count2+=1
        if str2[i]=='1' and str2[i]!=str1[i]:
            c+=1
    ans=c
    if count1>count2 :
        ans+=(count1-count2)
    print(ans)
    t-=1