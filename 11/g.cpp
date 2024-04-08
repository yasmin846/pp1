#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int t; 
    string s;
    cin >> n;
    map<string, set<int>> v;
    while(n--){
        cin >> s >> t;
        v[s].insert(t);
    }  
    for(auto value:st){
        if(value.second.size()>=3) 
            cout << value.first << " +1\n";
        else 
        cout << value.first << " NO BONUS\n";
    }
}