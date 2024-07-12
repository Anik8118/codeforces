#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    char str[x];
    scanf("%s",str);
    for(i=0;i<y;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]=='B' && str[j+1]=='G')
            {
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",str);
    return 0;
}