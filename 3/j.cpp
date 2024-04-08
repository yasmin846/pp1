#include <iostream>
using namespace std;
int main(){
    int k, s, i;
    cin >> k >> s;
    int arr[k];
    for (i=0; i<k; i++){
        cin >> arr[i];
    }
    if(s>arr[i-1]){
        cout << i;
        return 0;
    }
    for (i=0; i<k; i++){
        if(arr[i]==s){
            cout << i;
        } else if(s>arr[i] && s<arr[i+1]){
            cout << i+1;
        }
    }
    return 0;
}