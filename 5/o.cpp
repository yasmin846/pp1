#include <iostream>
using namespace std;
int main(){
    string s;
    char c = 97;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (c<s[i]){
            c = s[i];
        }
    }
    cout << c << " ";
    return 0;
}