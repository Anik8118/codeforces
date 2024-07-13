#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int temp1=(m-1)*1;
        int temp2=(n-1)*m;
        int sum=temp1+temp2;
        if(sum==k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}