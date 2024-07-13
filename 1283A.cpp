#include<bits/stdc++.h>
using namespace std;
#define hour 1440
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m,ex;
        cin>>h>>m;
        ex=hour-h*60-m;
        cout<<ex<<endl;
    }
    return 0;
 
}