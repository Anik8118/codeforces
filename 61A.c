#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int i,len;
    len=strlen(str2);
    for(i=0;i<len;i++)
    {
        if(str1[i]==str2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}