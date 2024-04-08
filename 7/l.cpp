#include <iostream>
#include <algorithm>
using namespace std;
bool pld(string s){
    string a = s;
    reverse(a.begin(), a.end());
    if(s == a)
        return true;
    else 
        return false;
    return pld(s);
}
int main(){
    string s;
    cin >> s;
    if(pld(s))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}