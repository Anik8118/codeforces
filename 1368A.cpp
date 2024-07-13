#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int x, y, z,c=0,sum=0,p;
        cin>>x>>y>>z;
        int a=max(x,y);
        int b=min(x,y);
        while(a<=z && b<=z){
            if(a<b)
                a+=b;
            else
                b+=a;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}