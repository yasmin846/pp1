#include <iostream>
#include <algorithm>
using namespace std;
void ex(int n, int k, string s){
    while(n>0){
        if(n%k > 9)
            s += char(n%k - 10 + 65);
        else
            s += char(n%k + 48);
        n/=k;
    }
    reverse(s.begin(), s.end());
    cout << s;
}
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    ex(n, k, s);
    return 0;
}