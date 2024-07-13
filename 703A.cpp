#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0,c=0,d=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b)
            m++;
        else if(b>a)
            c++;
        else if(a==b)
            d++;
    }
    if(m>c)
        cout<<"Mishka"<<endl;
    else if(c>m)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}