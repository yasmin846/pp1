#include <iostream>
using namespace std;
int main(){
    int k, i;
    cin >> k;
    int arr[k];
    int sqr;
    for (i=0; i<k; i++){
        cin >> arr[i];
    }
    for (i=0; i<k; i++){
        sqr = arr[i]*arr[i];
        cout << sqr << " ";
    }
    return 0;
}