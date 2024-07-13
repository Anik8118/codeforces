#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3,x4,y4,a;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(x1!=x2&&y1!=y2){
         a=pow((y1-y2),2)+pow((x1-x2),2);
         cout<<a/2<<endl;
        }
        else {
         a=pow((y1-y2),2)+pow((x1-x2),2);
         cout<<a<<endl;
        }
    }
    return 0;
}