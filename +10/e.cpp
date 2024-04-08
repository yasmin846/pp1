#include <iostream>
#include <algorithm>
using namespace std;
void DecToHex(int n, string s){
    while(n>0){
        if(n%16 > 9)
            s += char(n%16 - 10 + 65);
        else
            s += char(n%16 + 48);
        n/=16;
    }
    reverse(s.begin(), s.end());
    cout << s;
}
int main(){
    int n;
    cin >> n;
    string s;
    DecToHex(n, s);
    return 0;
}