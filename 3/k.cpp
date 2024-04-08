#include <iostream>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int arr[n];
    for (i=0; i<n; i++){
        cin >>  arr[i];
    }
    int dub = arr[0];
    cout << dub << " ";
    for (i=1; i<n; i++){
        if (dub!=arr[i]){
            cout << arr[i]<< " ";
            dub = arr[i];
         }  
    }
    return 0;
}