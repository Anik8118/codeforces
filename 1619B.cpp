#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long perfect_squares=sqrt(n);
        long long perfect_cubes=cbrt(n);
        long long overlap=(long long)(sqrt(cbrt(n)));
        long long result=perfect_squares+perfect_cubes-overlap;
        cout<<result<<endl;
    }
    return 0;
}