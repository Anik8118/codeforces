#include<string.h>
#include<stdio.h>
int main()
{
    char str[100],temp;
    int i,j,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len-1;i++)
    {
       for(j=0;j<len-i-1;j++)
       {
           if(str[j]!='+')
           {
               if(str[j]>str[j+2])
               {
                  temp=str[j];
                  str[j]=str[j+2];
                  str[j+2]=temp;
               }
           }
       }
    }
    puts(str);
    return 0;
}