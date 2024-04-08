#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int max = 0;
    int min = 0;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > max){
            max = arr[i];
        }if(arr[i] < min){
            min = arr[i];
            max = min;
        }
        
        
        
    }
    

   

    return 0;
}