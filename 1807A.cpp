#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y==z){
            cout<<"+"<<endl;
        }
        else if(x-y==z){
            cout<<"-"<<endl;
        }
    }
    return 0;
}