#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(min(w,x)>max(y,z) || min(y,z)>max(w,x)){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}