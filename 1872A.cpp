#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,cou=0;
        cin>>a>>b>>c;
        int x=max(a,b);
        int y=min(a,b);
           while(x>y){
                x-=c;
                y+=c;
                cou++;
          }
          cout<<cou<<endl;
    }
    return 0;
}
