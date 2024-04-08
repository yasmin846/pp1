#include <iostream> 
#include <algorithm> 
using namespace std; 
int main(){ 
    int n; 
    cin >> n; 
    int a[n]; 
    for(int i = 0; i < n; i++){ 
        cin >> a[i]; 
    } 
     
    int k; 
    cin >> k; 
    int arr[k]; 
    for(int i = 0; i < k; i++){ 
        cin >> arr[i]; 
    } 
 
    int al = sizeof(a)/sizeof(a[0]); 
    int bl = sizeof(arr)/sizeof(arr[0]); 
    int cl = al + bl; 
    int c[cl]; 
 
    for(int i = 0; i < al; i++){ 
        c[i] = a[i]; 
    } 
    for(int i = 0; i < bl; i++){ 
        c[al + i] = arr[i]; 
    } 
     
    sort(c, c + cl); 
    for(int i = 0; i < cl; i++){ 
        cout << c[i] << " "; 
    } 
    return 0; 
}