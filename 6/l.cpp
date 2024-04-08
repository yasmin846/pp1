#include <iostream>
using namespace std;
void sum(string s, int b, int count){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            count++;
        } else {
            count = 0;
        }
        if(count>=b){
            cout << "Valid";
            return;
        }
    }
    cout << "Not valid";
}
int main(){
    string s;
    cin >> s;
    int b, count;
    cin >> b;
    sum(s, b, count);
    return 0;
}