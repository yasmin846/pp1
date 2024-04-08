#include <iostream>
using namespace std;
int cnt = 0;
int count(string s, int i = 0){
    if(s.size() == i){
        return cnt;
    }
    if((s[i]-'0')%2 == 0){
        cnt++;
    }
    return count(s, ++i);
}
int main(){
    string s;
    cin >> s;
    cout << count(s);
    return 0;
}