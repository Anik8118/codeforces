#include<stdio.h>
int main()
{
    int x,count=0,i;
    scanf("%d",&x);
    char str[x];
    scanf("%s",str);
    for(i=0;i<x;i++)
    {
        if(str[i]==str[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}