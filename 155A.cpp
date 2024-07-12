#include<iostream>
using namespace std;
int main()
{
    int x,i,count=0;
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<x;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}