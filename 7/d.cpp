#include <iostream>
using namespace std;
void sum(string a, int s){
    for(int i = 0; i<a.size(); i++){
        char dig = a[i];
        int d = dig - '0';
        s += d;
    }
    cout << s;
}
int main(){
    string a;
    long long s = 0;
    cin >> a;
    sum(a, s);
    return 0;
}
