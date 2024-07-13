#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{ int t,n,c=0;
   string s;
   cin>>t;
   while(t--){
       cin>>n;
       cin>>s;
       for(int i=0;i<n;i++){
           if(s[i]=='W')
           {
               c++;
           }
           else
             {
                 break;
             }
       }
        for(int i=n-1;i>=0;i--){
           if(s[i]=='W'&&c!=n)
           {
               c++;
           }
           else
             {
                 break;
             }
       }
       cout<<(n-c)<<endl;
       c=0;
   }
    return 0;
}