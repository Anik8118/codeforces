#include <bits/stdc++.h>
using namespace  std;
int main() {
    int t = 0;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        cin >> n;
        int a[n];
        cin >> a[0];
        int max = a[0];
        int min = a[0];
        for(int j=1;j<n;j++){
            cin >> a[j];
            if(a[j] <= min){
                min = a[j];
            }
            if(a[j] >= max) {
                max = a[j];
            }
        }
        cout<<max-min<<endl;
    }
    return 0;
}