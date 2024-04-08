#include <iostream>
using namespace std;
void change(string s){
    for(int i=0; i<s.size(); i++){
        if(i%2 == 0){
            if(s[i]>=97 && s[i]<=122){
                s[i]-=32;
            }
        }
    }
    for(int i=0; i<s.size(); i++){
        cout << s[i];
    }
}
int main(){
    string s;
    cin >> s;
    change(s);
    return 0;
}