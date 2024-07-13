#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int c=0;
    for(int i=0;i<5;i++){
        string s2;
        cin>>s2;
        if(s1[0]==s2[0] || s1[1]==s2[1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}