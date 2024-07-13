#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,c=0,sum=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            
        }
        for(i=0;i<n;i++){
            if(sum%2==0){
                c++;
            }
        }
        if(c>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}