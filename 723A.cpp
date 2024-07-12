#include<iostream>
using namespace std;
int main()
{
    int x[3],temp;
    for(int i=0;i<3;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    cout<<x[2]-x[1]+x[1]-x[0];
    return 0;
}