#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n;
    cin >> k;
    if (n>k){
        cout << "1" << endl;
    } else if (n<k){
        cout << "2" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
    }