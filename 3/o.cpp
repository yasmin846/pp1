#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int k, i;
    cin >> k;
    int arr[k];
    for (i=0; i<k; i++){
        cin >> arr[i];
    }
    sort(arr, arr+sizeof(arr)/sizeof(int));
    for (i=k-1; i>=0; --i){
        cout << arr[i] << " ";
    }
    return 0;
}