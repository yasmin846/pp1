#include <iostream>
using namespace std;
long long int degree(int a, int b){
    long long int s = 1;
    for(int i = 0; i< b; ++i){
        s *= a;
    }
    return s;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<=n; ++i){
        cout << degree(i, i) <<  " ";
    }
    return 0;
}
