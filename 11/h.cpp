#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i<s.size(); ++i){
        if(s[i] + n > 'Z') 
            s[i] = (s[i]+n - 90) + 65 - 1;
        else 
            s[i] = s[i] + n;
        cout << s[i];
    }
    return 0;
}