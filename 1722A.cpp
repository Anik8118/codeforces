#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int i,n;
       string s;
       cin >> n;
       cin >> s;
       int n1=0,n2=0,n3=0,n4=0,n5=0;
       int len = s.length();
       if(len == 5){
            for(int i=0;i<n;i++){
                if(s[i]=='T'){n1++;}
                else if(s[i]=='i'){n2++;}
                else if(s[i]=='m'){n3++;}
                else if(s[i]=='u'){ n4++;}
                else if(s[i]=='r'){n5++;}
           }
 
 
       }
       if(n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0 && n5 > 0){cout << "YES" << endl;}
       else{cout << "NO" << endl;}
 
    }
    return 0;
}