#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[1000],ar=0,p=9;
        while(n>0 && p>0){
            if(n>=p){
                n-=p;
                arr[ar++]=p;
            }
            p--;
        }
        for(int i=ar-1; i>=0;i--){
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}