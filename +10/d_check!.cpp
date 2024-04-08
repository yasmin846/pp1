#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int res = 0;
    int max = 0;
    for (int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            res = gcd(arr[i], arr[j]);
            if(max<res) 
                max = res;
        }
    }
    cout << max << endl;
    return 0;
}