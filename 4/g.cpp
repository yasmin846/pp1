#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cin >> n;
    int a[n][n];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i+j == n-1){
                cout << i+1;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}