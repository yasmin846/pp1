#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 2 == 1){
        cout << "Super" << endl;
    } else if (n % 2 == 0 && n<5 && n>2){
        cout << "Not Super" << endl;
    } else if (n % 2 == 0 && n<20 && n>6){
        cout << "Super" << endl;
    } else{
        cout << "Not Super" << endl;
    }
    return 0;
    }