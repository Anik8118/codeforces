#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n;
    cin>>str;
    int c=0;
    for (int i=0;i<n-2;i++){
        if (str[i]=='x' && str[i+1]=='x' && str[i+2]=='x'){
            c++;
            str[i] =' ';
        }
    }
    cout<<c<<endl;
    return 0;
}