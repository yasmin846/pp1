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
         int cnt = 0;
        for (j=0; j<m; j++){
            cnt += arr[i][j];
        }
        cout << "The sum of row number" << " " << i+1 << " " << "is" << " " << cnt << endl;
    }
    for (i=0; i<m; i++){
         int cnt = 0;
        for (j=0; j<n; j++){
            cnt += arr[j][i];
        }
        cout << "The sum of column number" << " " << i+1 << " " << "is" << " " << cnt << endl;
    }
    
    return 0;
}