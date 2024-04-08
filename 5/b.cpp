#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if(s[i]>96 && s[i]<123){
            s[i] = s[i] - 32;
        } else {
            s[i] = s[i];
        }
    }
    for (int i = 0; i < s.size(); i++){
        cout << s[i];
    }
    return 0;
}