#include<stdio.h>
int main()
{
    int n,i,m,a,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&m,&a);
        if(a-m>=2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}