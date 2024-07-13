#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s1, s2="314159265358979323846264338327";
        cin>>s1;
        int c=0;
        for(int i=0;i<s1.length();i++){
            if(s2[i]==s1[i])
                c++;
            else
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}