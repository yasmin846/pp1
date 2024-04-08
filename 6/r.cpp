#include <iostream>
#include <cmath>
using namespace std;
void rev(string s){
    for(int i = 0; i<s.size(); i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]-=32;
        }
        cout << s[i];
    }
}
int main(){
    string s;
    cin >> s;
    rev(s);
    return 0;
}