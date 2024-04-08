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
        int b;
        cin >> s >> b;
        a[s] = a[s] + b;
    }
    for(it = a.begin(); it != a.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}