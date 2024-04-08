#include <iostream>
using namespace std;
int a = -999999999;
int max(string s, int i = 0){
    if(s.size() == i){
        return a;
    }
    if(s[i] - 48 > a){
        a = s[i] - 48;
    }

    return max(s, ++i);
   
    
}

int main(){
    string s; 
    cin >> s;
    cout << max(s);
    return 0;
}