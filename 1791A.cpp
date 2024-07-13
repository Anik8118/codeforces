#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ch;
        if(ch=='c'|| ch=='o' || ch=='d' ||ch=='e' || ch=='f' || ch=='r' || ch=='s'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}