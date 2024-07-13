#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++){
        string s;
        cin>>s;
        if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
 
}