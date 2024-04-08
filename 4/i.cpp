#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i, j, n, m;
    cin >> n >> m;
    int arr[n][m];
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            int k = round (sqrt(arr[i][j]));
            if (k*k == arr[i][j]){
                cout << sqrt(arr[i][j]) << " ";
            } else {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}