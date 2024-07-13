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
        int f=0,l=n-1,c=0;
        for(int i=0;i<n;i++){
                if(str[i]!=str[l]){
                    l--;
                }
                else{
                    c=n-2*i;
                    break;
                }
 
        }
        cout<<c<<endl;
    }
    return 0;
}