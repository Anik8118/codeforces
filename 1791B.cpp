#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,inc1=0,inc2=0,c=0;
       string s;
       cin>>n;
       cin>>s;
       for(int i=0;i<s.length();i++){
            if(s[i]=='U')
                inc1++;
            else if(s[i]=='D')
                inc1--;
            else if(s[i]=='R')
                inc2++;
            else
                inc2--;
            if(inc1==1 && inc2==1){
                c++;
                break;
            }
       }
       if(c==1)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
    return 0;
}