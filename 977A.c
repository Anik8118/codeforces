#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        if(x%10==0)
        {
            x=x/10;
        }
        else
        {
            x=x-1;
        }
    }
    printf("%d",x);
}