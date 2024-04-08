#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> a;
    map <string, int>::iterator it;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(a[s] == 0)
            cout << "new user added" << endl;
        else
            cout << "user already exists" << endl;
        a[s]++;  
    }
    return 0;
}