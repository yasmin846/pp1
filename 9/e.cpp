#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    string x;
    map<string, int> m;
    map<string, int>:: iterator it = m.begin();
    for(int i = 0; i<n; i++){
        cin >> x;
        m[x]++;
    }
    int cnt = 0;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second == 3)
            cnt++;
    }
    cout << cnt << " ";
    return 0;
}