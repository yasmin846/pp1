#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n%4 == 0 && n%100 != 1){
        cout << "YES" << endl;
    } else if (n%400 == 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
    }