#include<stdio.h>
int main()
{
    char n[1000],i;
    gets(n);
    int len,count=0;
    len=strlen(n);
    for(i=0;i<len;i++)
    {
        if(n[i]=='H' || n[i]=='Q' || n[i]=='9')
        {
            count++;
        }
    }
    if(count>=1)
    {
        printf("YES");
    }
    else if(count==0)
    {
        printf("NO");
    }
    return 0;
}