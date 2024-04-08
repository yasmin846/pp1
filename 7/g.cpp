#include <iostream>
using namespace std;
long long fct(int a){
    if(a == 1 || a == 0)
        return 1;
    a = a * fct(a-1);
    return a;
}
int main(){
    int a;
    cin >> a;
    cout << fct(a);
    return 0;
}