#include <iostream>
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
            int l = i+j;
            if(l%2 == 0){
                cout << arr[i][j]+1 << " ";
            } else if (l%2 != 0){
                cout << arr[i][j]-1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}