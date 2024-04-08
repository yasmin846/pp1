#include <iostream>
#include <algorithm>
using namespace std;
void cheater(int arr[], int n, int k, int cnt){
    for(int i = 0; i<n; i++){
        if((arr[i+1] - arr[i]) <= k){
            cnt++;
        }
    } 
    if(cnt>=2)
        cout << "cheater";
    else
        cout << "no";
}
int main(){
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr[n] = 0;
    sort(arr, arr + n + 1);
    cheater(arr, n, k, cnt);
}