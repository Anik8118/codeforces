#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        if(n==1){
            cout<<"YES"<<endl;
        }
        else if(n==2){
            if(str[0]!=str[1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}