#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=0,j=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(m--){
        if(arr[j]<0){
            c+=abs(arr[j]);
       }
       j++;
 
    }
    cout<<c<<endl;
    return 0;
 
}