#include <iostream>
using namespace std;
void fibonacci(int a, int f1b, int f2b, int f3b, int cnt){
    if(a == 1) {
        cout << "0";
    }
    else if(a == 2) {
        cout << "1";
    }
    else if(a != cnt) {
        f1b = f2b;
        f2b = f3b;
        f3b = f1b + f2b;
        fibonacci(a, f1b, f2b, f3b, cnt + 1);
    } else {
        cout << f3b;
    }
    
}

int main(){
    int a, f1b = 0, f2b = 1, f3b = 1, cnt = 3;
    cin >> a;
    fibonacci(a, f1b, f2b, f3b, cnt);
    return 0;
}