#include<stdio.h>
#include<math.h>
int main()
{
    int array[6][6],i,j,row,col;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            scanf("%d",&array[i][j]);
            if(array[i][j]==1)
            {
                row=abs(3-i);
                col=abs(3-j);
                printf("%d",row+col);
            }
        }
    }
    return 0;
}