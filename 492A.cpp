#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,hight=0,i=1,temp=0;
    cin>>n;
    while(temp<n){
        temp=((i*i)+i)/2;
        if(temp>n)
            break;
        n=n-temp;
        hight++;
        i++;
    }
    cout<<hight<<endl;
    return 0;
}