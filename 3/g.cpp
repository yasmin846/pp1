#include <iostream>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int arr[n];

    for (i=0; i<n; ++i){
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (i=0; i<n; ++i){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    for (i=0; i<n; ++i){
        if (arr[i]<min)
            min = arr[i];
    } 
    for(int i=0; i<n; i++){
        if(arr[i]==max) arr[i] = min;
    }
    for(i=0; i<n; ++i)
        cout << arr[i] << " ";
    return 0;
}