#include <iostream>
using namespace std;
int main(){
    int n, k, i;
    cin >> n;
    int arr[n];
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> k;
    int ar[k];
    for (i=0; i<n; i++){
        cin >> ar[i];
    }
    while(arr[i]<=ar[i]){
        cout >>arr[n] + ar[k] << " ";
    }
}