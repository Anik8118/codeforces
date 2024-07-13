#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1;
    int len=str1.length();
    for(int i=0;i<len;i++){
 
        if(str1[i]=='.'){
            str2+='0';
        }
        if(str1[i]=='-' && str1[i+1]=='.'){
 
            str2+='1';
            ++i;
        }
        if(str1[i]=='-' && str1[i+1]=='-'){
            str2+='2';
            ++i;
        }
 
    }
    cout<<str2<<endl;
    return 0;
}