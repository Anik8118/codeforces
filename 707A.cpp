#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,j,c=0;
    cin>>m>>n;
    char ch;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y'){
 
                c++;
            }
        }
    }
    if(c>0){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}