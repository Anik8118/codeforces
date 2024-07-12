#include<stdio.h>
int main()
{
   int i,l,b;
   scanf("%d%d",&l,&b);
   for(i=1;;i++)
   {
       l*=3;
       b*=2;
       if(l>b)
        break;
   }
   printf("%d",i);
}