#include<stdio.h>
int main()
{
    int n,h,i,count=0,x;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<=h)
        {
           count++;
        }
        else
        {
            count+=2;
        }
    }
    printf("%d",count);
    return 0;
}