#include<stdio.h>
int main()
{
    int n,array[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(array[i]==j)
            {
                printf("%d ",i+1);
            }
        }
    }
    return 0;
}