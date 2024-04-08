#include <iostream>
using namespace std;
int main(){
    long long k, i, l ,r;
    cin >> k >> l >> r;
    l--;
    r--;
    int arr[k];
    for (i=0; i<k; i++){
        cin >> arr[i];
    }
    for (i=0; i<=l-1; i++){
        cout << arr[i] << " ";
    }
    for (i=r; i>=l; i--){
        cout << arr[i] << " ";
    }
    for (i=r+1; i<k; i++){
        cout << arr[i] << " ";
    }
    return 0;
}