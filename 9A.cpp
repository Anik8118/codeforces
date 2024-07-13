#include<iostream>
#include <string>
using namespace std;
int main()
{
    int x,y;
    cin >>x>>y;
    string str[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int temp = max(x,y);
    cout <<str[temp]<<endl;
    return 0;
}