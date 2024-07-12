#include<stdio.h>
int main()
{
    int a,b,c,count=0,sum=0,n,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==1)
            count++;
        if(b==1)
            count++;
        if(c==1)
            count++;
        if(count>=2)
            sum++;
        count=0;
    }
    printf("%d\n",sum);
}