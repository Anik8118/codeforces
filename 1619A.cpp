#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str,f,l;
        cin>>str;
        int len=str.length();
        if(len%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            int x=len/2;
            f=str.substr(0,x);
            l=str.substr(x);
            if(f==l){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
 
}