
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,Mihai=0,Bianca=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
 
        for(int i=0;i<n;i++){
 
            if(arr[i]%2==0){
                Mihai+=arr[i];
            }
            else{
                Bianca+=arr[i];
            }
 
 
        }
 
 
 
        if(Mihai>Bianca)
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}