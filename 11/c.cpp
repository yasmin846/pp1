#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, double> d;
    string s;
    double total = 0;
    double t;
    for(int i=0; i<n; i++){
        cin >> s >> t;
        d[s] += t;
        total += t;
    }
    vector<pair<double, string>> res;
    for(auto it:d){
        res.push_back({it.second/total*100.0, it.first});
    }
    sort(res.begin(), res.end());
    for(int i=res.size()-1; i>=0; i--){
        cout << res[i].second << " " << res[i].first<<"%\n";
    }
}