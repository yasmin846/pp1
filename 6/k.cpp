#include <iostream>
using namespace std;
void sum(int a, int b){
    while(a>0){
        b = b + a%10;
        a = a/10;
    }
    cout << b;
}
int main(){
    int a, b = 0;
    cin >> a;
    sum(a, b);
    return 0;
}