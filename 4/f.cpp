#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cin >> n;
    int arr[n][n];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    int row = 0;
    int col = 0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (arr[i][j]> max){
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << row+1 << " " << col+1 << " ";
    return 0;
}