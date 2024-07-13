#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c1=0,c2=0;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<2*n;i++){
            if(arr[i]%2==0){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1==c2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}