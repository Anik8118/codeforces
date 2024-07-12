#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int mag[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&mag[i]);
    }
    for(i=0;i<n;i++)
    {
        if(mag[i]!=mag[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}