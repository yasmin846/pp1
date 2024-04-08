#include <iostream>
#include <algorithm>
using namespace std;
string dectobin(int a, string res){
    while(a>0){
        res += to_string(a%2);
        a /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int a;
    string res;
    cin >> a;
    string answ = dectobin(a, res);
    cout << answ;
    return 0;
}