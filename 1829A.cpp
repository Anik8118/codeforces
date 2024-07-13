#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int c=0;
       string str, s="codeforces";
       cin>>str;
       for(int i=0;i<s.length();i++){
            if(s[i]!=str[i])
                c++;
       }
 
      cout<<c<<endl;
    }
    return 0;
}