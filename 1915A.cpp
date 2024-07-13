#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && z!=x && z!=y){
            cout<<z<<endl;
        }
        else if(y==z && x!=y && x!=z){
            cout<<x<<endl;
        }
        else if(x==z && y!=x && y!=z){
            cout<<y<<endl;
        }
    }
    return 0;
}