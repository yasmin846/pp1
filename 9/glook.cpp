#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack <int> a;
    

    for(int i = 0; i < s.size(); i++){
        if(!a.size()){
            a.push(s[i]);
        }
        else if(a.top() == '1' && s[i] == '1') 
            a.pop();
        else 
            a.push(s[i]);
    }
    string t;
    while(a.size()){
        t += a.top();
        a.pop();
    }   
    for(int i = t.size()-1; i >= 0; i--) 
        cout << t[i];
    return 0;
}