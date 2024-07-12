#include<stdio.h>
int main()
{
    int n,i,b,c,d,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n++;
        b=n/1000;
        c=(n/100)%10;
        d=(n/10)%10;
        e=(n%10);
        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
        {
            break;
        }
    }
    printf("%d",n);
    return 0;
}