#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sub = 0,sum = 0,div = 0,mod = 0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(b < a){
            swap(a,b);
        }
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        if(mod > 0){
            sum++;
        }
        cout<<sum<<endl;
 
    }
 
    return 0;
}