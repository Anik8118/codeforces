#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,ans =0;
        string s;
        cin>>n>>s;
        map<char,bool>visited;
 
        for(int j=0;j<n;j++){
            if(visited[s[j]]){
                ans++;
            }
            else{
                ans+=2;
                visited[s[j]]=true;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}