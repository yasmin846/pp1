#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int lim;
    cin >>lim;
    int up = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(lim < arr[i][j])
                up++;
        }
    }
    if(up >= 1)
        cout << "Penalty!";
    else
        cout << "No penalty for today.";
    return 0;
}