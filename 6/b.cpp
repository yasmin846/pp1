#include <iostream>
#include <cmath>
using namespace std;
int ar(int a[], int b[], int n){
    for(int i=0; i<n; i++){
        cout << abs(a[i]-b[i]) << " ";
    }
    return 2;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    ar(a, b, n);
    return 0;
}