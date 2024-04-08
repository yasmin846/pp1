#include <iostream>
using namespace std;
void printTotalNumberAndTheMaximumNumberOfChips(int arr[], int n){
   int sum = 0; 
   int max = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << sum << " " << max;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    printTotalNumberAndTheMaximumNumberOfChips(arr, n);
    return 0;
}