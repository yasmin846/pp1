#include <iostream>

using namespace std;

int main(){

    int n;
    long long target;
    cin >> n >> target;

    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << i + 1 << endl;
            return 0;
        } else if(arr[i] > target){
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}