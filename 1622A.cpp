#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y)==z || (x+z)==y || (y+z)==x)
            cout<<"YES"<<endl;
        else if((x%2==0 && y==z) || (y%2==0 && x==z) || (z%2==0 && y==x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}