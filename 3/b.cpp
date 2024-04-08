#include <iostream>
using namespace std;
int main(){
    int i, n;
    int k = 0;
    cin >> n;
    int arr[n];
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    for (i=0; i<n; i++){
        if(arr[i]>0)
            k+=1;
    }
    cout << k << endl;
    return 0;
}