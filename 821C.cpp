#include<iostream>
#include<stack>
#define ll long long int
using namespace std;
int main()
{
	ll x;
	cin>>x;
	stack<int>s;
	int p=1;
	int count=0;
 
	int flag=0;
	for(int i=1;i<=2*x;i++){
		string a;
		cin>>a;
		if(a=="add"){
			int v;
			cin>>v;
			s.push(v);
		}
		else{
			if(!s.empty()){
 
			int x=s.top();
			if(x!=p){
				count++;
				while(!s.empty())s.pop();
			}
			else if(x==p) {
			if(!s.empty())s.pop();
			}
 
		}
		p++;
	}
 
	}
	cout<<count<<endl;
	return 0;
}
