#include<stdio.h>
int main()
{
    int n,i,j,sum=0,temp,coin=0,k=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
      k=k+array[i];
      coin++;
      if(k>sum/2)
            break;
    }
    printf("%d",coin);
    return 0;
}