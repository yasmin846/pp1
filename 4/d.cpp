#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cin >> n;
    /*int arr[n][n];
    for(i=0; i<n; i++){
        for (j=0; j<n; j++){
            cout << arr[i][j];
        }
    }*/
    for(i=0; i<n; i++){
        cout << i << " ";
    }
    cout << endl;
    for(i=1; i<n; i++){
        cout << i << " ";
        for (j=1; j<n; j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
    return 0;
}