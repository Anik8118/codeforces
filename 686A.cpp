#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    int c=0;
     while(n--){
        char y;
        long long a;
        cin>>y>>a;
        if(y=='+'){
            x+=a;
        }
        else{
            if(x>=a)
                x-=a;
            else
                c++;
        }
    }
    cout<<x<<" "<<c<<endl;
    return 0;
}