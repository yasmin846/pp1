#include <iostream>
using namespace std;
int main(){
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i<n; i++){
        cin >> arr[i];
    }
    for (i=0; i<n; i++){
        if (arr[i]%2 == 1)
            cout << arr[i] << " ";
    }
    return 0;
}