#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "coordinates of min elements:";
    int sum = 0;
    int pos = 0;
    int pos1 = 0;
    for (int i=0; i<m; i++){
        int min = arr[0][i];
        for (int j=0; j<n; j++){
            if(arr[j][i]<min){
                min = arr[j][i];
                pos = j;
                pos1 = i;
            }
        }
        cout << endl << pos+1 << ";" << pos1+1;
        sum += min;
    }
    cout << endl << endl << "Their sum:" << endl << sum;
    return 0;
}