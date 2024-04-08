#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; 
    cin >> n;
    string login, password;
    map <string, string> m;
    map <string, string>::iterator it;
    for(int i = 0; i < n; i++){
        cin >> login >> password;
        m[login] = password;
    }
    int k; 
    cin >> k;
    for(int i = 0; i < k; i++){
        string s, s1;
        cin >> s >> s1;
        if(!m.count(s)){
            cout << "login error" << endl;
        } else if(m[s] != s1){
            cout << "password error" << endl;
        } else{
        cout << "correct password" << endl;
        }
    }
    return 0;
}