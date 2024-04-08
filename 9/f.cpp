#include <iostream>
#include <stack>
using namespace std;
int main(){
    string n;
    cin >> n;
    stack<char> m;
    for(int i = 0; i<n.size(); i++){
        if(n[i] == '(')
            m.push(n[i]);
        else{
            if(m.empty()){
                cout << "NO";
                return 0;
            }
            m.pop();
        }
    }
    if(m.empty())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}