#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
     string str;
    while(n--){
        cin>>str;
        if((str[0]=='y'|| str[0]=='Y') && (str[1]=='e' || str[1]=='E') && (str[2]=='s' || str[2]=='S')){
                cout<<"YES"<<endl;
 
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}