#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,c=0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s[0]=='a' && s[1]=='b' && s[2]=='c'){
            cout<<"YES"<<endl;
        }
        else if(s[0]=='a' && s[1]=='c' && s[2]=='b'){
            cout<<"YES"<<endl;
        }
        else if(s[0]=='b' && s[1]=='a' && s[2]=='c'){
            cout<<"YES"<<endl;
        }
        else if(s[0]=='c' && s[1]=='b' && s[2]=='a'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}