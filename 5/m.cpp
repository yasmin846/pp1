#include <iostream>
using namespace std;
int main(){
    string s;
    char x;
    int n;
    cin >> s >> x >>n;
    int count;
    for (int i = 0; i < s.size(); i++){
        if (int(x) == s[i]){
            count++;
        }
    }
    if (count == n){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}