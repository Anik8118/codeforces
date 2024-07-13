#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,odd=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                odd++;
            }
            sum+=arr[i];
        }
        if(sum%2==0 && n%2==0 && odd==n){
            cout<<"NO"<<endl;
        }
        else if(odd>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}