#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,flag=0;
    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    len=strlen(str1);
    for(i=0,j=len-1;i<len;i++,j--)
    {
        if(str1[i]==str2[j])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}