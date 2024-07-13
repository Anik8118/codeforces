#include<iostream>
using namespace std;
int main()
{
    int i,n,A;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A;
        if(A>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(A>=1600 && A<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(A>=1400 && A<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else
        {
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}