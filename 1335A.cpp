#include<iostream>
using namespace  std;
int main()
{
    int n,i;
    cin>>n;
    int x;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==1 || x==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(x-1)/2<<endl;
        }
    }
    return 0;
}