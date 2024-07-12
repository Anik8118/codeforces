#include<stdio.h>
int main()
{
    int k,n,w,a;
    scanf("%d%d%d",&k,&n,&w);
    a=(w*(k+w*k))/2;
    if(a>n)
        printf("%d",a-n);
    else
        printf("0");
    return 0;
}