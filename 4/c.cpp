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
    int neg = 0;
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            if (arr[i][j]<0)
                neg++;
        }
    }
    cout << neg << " ";
    return 0;
}