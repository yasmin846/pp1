#include <iostream>
using namespace std;
int main(){
    int i, j, n, m;
    cin >> n >> m;
    int a[n][m];
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for (i=0; i<n; i++){
        int sum = 0;
        int maxi = 0;
        int index = 0;
        for (j=0; j<n; j++){
            sum += a[i][j]; 
        }
        if (sum > maxi){
            maxi = sum;
            index = i;
        }
        cout << index << " ";
    }
    return 0;
}
#include <iostream> 
using namespace std; 
 
int main() { 
    int n, m; 
    cin >> n >> m; 
    int arr[n][m]; 
    int arr2[n]; 
 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            cin >> arr[i][j]; 
        } 
    } 
 
     
    for (int i = 0; i < n; i++) { 
        int sum = 0; 
        for (int j = 0; j < m; j++) { 
            sum += arr[i][j]; 
        } 
        arr2[i] = sum; 
    } 
 
     
    int minSum = arr2[0]; 
    int position = 0; 
    for (int i = 1; i < n; i++) { 
        if (arr2[i] < minSum) { 
            minSum = arr2[i]; 
            position = i; 
        } 
    } 
 
    cout << position + 1 << endl;  
 
    return 0; 
}