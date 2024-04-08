#include <iostream>
using namespace std;
int main(){
    int k, i;
    cin >> k;
    int arr[k];
    for (i = 0; i < k; ++i){
        cin >> arr[i];
    }
    int max = 0;
    for (i = 0; i < k; ++i){
        if (arr[i]>arr[max]){
           max = i;
        }
    }
    cout << max+1<< " ";
    return 0;
}