#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int row = 0;
    int column = 0;
    long long max = -999;
    for (int i=0; i<n; i++){
        for ( int j=0; j<n; j++){
            if (i == j && arr[i][j]>max){
                max = arr[i][j];
                row = i;
                column = j;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << row+1 << ";" << column+1;
    return 0;
}