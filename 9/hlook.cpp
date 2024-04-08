#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> a;
    map <string, int>::iterator it;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(!a[s])
            a[s] = i;
    }
    for(it = a.begin(); it != a.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}