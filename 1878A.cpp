#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,c=0;
        cin>>n>>a;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(a==arr[i]){
                c++;
            }
        }
        if(c>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
