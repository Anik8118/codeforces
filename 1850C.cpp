#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char str[100][100];
        char ch;
        string c="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>str[i][j];
                if(str[i][j]>='a' && str[i][j]<='z')
                    c+=str[i][j];
            }
        }
        cout<<c<<endl;
 
    }
    return 0;
}