#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int res1=c-c%a+b;
        int res2=c-c%a-(a-b);
        if(res1<=c)
            cout<<res1<<endl;
        else
            cout<<res2<<endl;
    }
    return 0;
 
}