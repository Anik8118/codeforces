#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,ant=0,dan=0;
    scanf("%d",&n);
    char x[n];
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='A')
           ant++;
        else if(x[i]=='D')
            dan++;
    }
    if(ant>dan)
        printf("Anton");
    else if(ant<dan)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}