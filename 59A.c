#include<stdio.h>
void capital(char str[100])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97)
            str[i]=str[i]-32;
    }
}
void small(char str[100])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]<=90)
            str[i]=str[i]+32;
    }
}
int main()
{
    char str[100];
    gets(str);
    int i,uper=0,lower=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97)
            lower++;
        else
            uper++;
    }
    if(uper>lower)
    {
        capital(str);
    }
    else
    {
        small(str);
    }
    printf("%s",str);
    return 0;
}