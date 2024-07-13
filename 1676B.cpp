#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,mini;
        cin>>n;
        int arr[1000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini=arr[0];
        }
        for(int i=0;i<n;i++){
            if(mini>arr[i]){
                mini=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            sum+=arr[i]-mini;
        }
        cout<<sum<<endl;
    }
    return 0;
}