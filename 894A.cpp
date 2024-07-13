#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='Q'){
            c1++;
            c3+=c2;
        }
        else if(str[i]=='A'){
            c2+=c1;
        }
    }
    cout<<c3<<endl;
    return 0;
}