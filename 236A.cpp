#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char ch[100];
    cin>>ch;
    int c=0;
    int len=strlen(ch);
     sort(ch,ch+len);
    for(int i=0;i<len;i++){
        if(ch[i]!=ch[i+1]){
            c++;
        }
        else{
            continue;
        }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}