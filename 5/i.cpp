#include <iostream>
using namespace std;
int main(){
    string n;
    string s;
    cin >> n >> s;
    int sum_n = 0;
    int sum_s = 0;
    for(int i=0; i<n.size(); i++){
        sum_n += n[i];
    }
    for(int i=0; i<s.size(); i++){
        sum_s += s[i];
    }
    if(sum_s == sum_n){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}