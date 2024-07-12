#include<stdio.h>
int main()
{
    int n,i,x,y,a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        a=y-x+a;
        if(b<a)
            b=a;
    }
    printf("%d",b);
    return 0;
}