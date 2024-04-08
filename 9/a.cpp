#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*void item(map<int, int> m){
    map<int, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
}*/
int main(){
    int n;
    int a, b;
    cin >> n;
    vector<pair<int, int>> m;
    vector<pair<int, int>>::iterator it;
    for(int i = 0; i<n; i++){
        cin >> a >> b;
        m.push_back(make_pair(a,b));
    }
    sort(m.begin(), m.end());
    for(it = m.begin(); it!= m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}