#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int count = 0;
    int count1 = 0;
    for(int i = 0; i<=s.size(); i++){
        count = count + char(s[i]);
    }
    for(int i = 0; i<=t.size(); i++){
        count1 = count1 + char(t[i]);
    }
    if(count1 % count ==0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}