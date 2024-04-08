#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            long long x = a[i];
             a[i] = a[j];
                a[j] = x;
        }
    }
    for(auto i : a){
        cout << i << " ";
    }

    return 0;
}