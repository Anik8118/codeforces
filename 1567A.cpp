#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='D')
                cout<<"U";
            else if(str[i]=='U')
                cout<<"D";
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}