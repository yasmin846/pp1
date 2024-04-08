#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> f(n); 
    vector<int> s(m);
    for(int i=0; i<n; i++){
        cin >> f[i];
    }
    for(int i=0; i<m; i++){
        cin >> s[i];
    }
    vector<int>::iterator it = unique(f.begin(), f.end());
    f.erase(it, f.end());
    it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    vector<int> t;
    for(int i=0; i<max(f.size(), s.size()); i++){
        if(i<f.size()) 
            t.pb(f[i]);
        if(i<s.size()) 
            t.pb(s[i]);
    }
    it = unique(t.begin(), t.end());
    t.erase(it, t.end());
    for(int i:t) 
        cout << i << " ";
}