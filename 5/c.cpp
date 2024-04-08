#include <iostream>
using namespace std;
int main(){
    string s;
    string target;
    cin >> s >> target;
    int found = s.find(target);
    if(found != string::npos){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}