#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        char arr[3][3];
        int c1=0,c2=0,c3=0;
        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='A')
                    c1+=1;
                else if(arr[i][j]=='B')
                    c2+=1;
                else if(arr[i][j]=='C')
                    c3+=1;
            }
        }
        if(c1==c2)
            cout<<"C"<<endl;
        else if(c1==c3)
            cout<<"B"<<endl;
        else if(c2==c3)
            cout<<"A"<<endl;
    }
    return 0;
}