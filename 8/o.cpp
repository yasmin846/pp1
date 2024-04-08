#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<char> b;
    set<char>:: iterator it = b.begin();
    for(int i = 0; i<s.size(); i++){
        b.insert(tolower(s[i]));
    }
    cout << b.size() << endl;
    for(it = b.begin(); it != b.end(); it++){
        cout << *it << " ";
    }
    return 0;
}