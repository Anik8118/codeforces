#include<stdio.h>
int main()
{
    int m,x=0,i;
    char str[4];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%s",str);
        if(str[1]=='+')
            x++;
        else
            x--;
    }
    printf("%d",x);
    return 0;
}