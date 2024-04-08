#include <iostream>

using namespace std;

int main(){ 
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        s[i] = s[i] + 1;
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 123){
            s[i] = 97;
        }
        cout << s[i];
    }

    return 0;
}