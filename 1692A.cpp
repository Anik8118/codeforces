#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(b>a)+(c>a)+(d>a)<<endl;
    }
    return 0;
}
