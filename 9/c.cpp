#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    vector<int> m;
    for(int i = 0; i<n; i++){
        cin >> x;
        m.push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i<m.size(); i++){
        if(m[i] == m[i+1])
            cnt++;
            i++;
    }
    cout << cnt << " ";
    return 0;
}