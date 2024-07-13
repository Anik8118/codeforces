#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0,x=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='B'){
                c++;
            }
            else{
               x++;
            }
        }
        if(c==x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}