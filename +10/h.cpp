#include <iostream>
#include <algorithm>
using namespace std;
void str(string s){
    reverse(s.begin(), s.end());
    cout << s;
}
int main(){
    string s;
    cin >> s;
    str(s);
    return 0;
}