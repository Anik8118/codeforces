#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c;
    cin>>n;
    if(n%2==1)
        cout<<"-1"<<endl;
    else{
        for(i=1;i<n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
 
}