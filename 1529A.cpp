#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
 
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[0]==arr[i])
            c++;
        }
        cout<<n-c<<endl;
    }
    return 0;
}