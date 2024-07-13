#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>x>>y>>z>>n;
        sum+=x+y+z+n;
        if(sum%3!=0 || sum/3<x || sum/3<y || sum/3<z)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
 
    return 0;
}