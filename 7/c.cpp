#include <iostream>
using namespace std;
bool target(int arr[], int a, int n, int i = 0){
    if(a == i)
        return false;
    if(arr[i] == n)
        return true;       
    return target(arr, a, n, ++i); 
}

int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0; i<a; i++){
        cin >> arr[i];
    }
    int n;
    cin >> n;
    if(target(arr, a, n) == true){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}