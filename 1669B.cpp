#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c = 1, flag = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i+1]){
                c++;
            }
            else{
                c = 1;
            }
            if(c >= 3){
                if(arr[i+1]>arr[i] && c>=3){
                    cout << arr[i+1] << endl;
                    flag = 1;
                    break;
                }
                else{
                    cout << arr[i] << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            cout << "-1" << endl;
        }
    }
    return 0;
}