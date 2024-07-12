#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b;
    b=240-b;
    for(n=1;n<=a;n++)
    {
        b-=n*5;
        if (b<0)
        {
            cout << n-1 << endl;
            exit(0);
        }
    }
    cout<<a<<endl;
    return 0;
}