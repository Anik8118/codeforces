#include<stdio.h>
int main()
{
    int array1[100],n,i,m=0,f;
    scanf("%d%d",&n,&f);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array1[i]>=array1[f-1] && array1[i]>0)
            m++;
    }
    printf("%d",m);
    return 0;
}