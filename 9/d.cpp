#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, a;
    cin >> n >> a;
    int x;
    vector<int> m;
    for(int i = 0; i<n; i++){
        cin >> x;
        m.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i<m.size(); i++){
        if(m[i] == a)
            cnt++;
    }
    cout << cnt << " ";
    return 0;
}