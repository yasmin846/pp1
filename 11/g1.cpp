#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int > m;
    map <string , int> v;
    for(int i = 0; i<n; ++i){
        string s;
        int x;
        cin >> s >> x;
        if(m[s] != x){
            m[s] = x;
            v[s]++;
        }
    }
    map<string , int>:: iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        if(it->second >= 3) 
            cout << (*it).first << " " << "+1" << endl;
        else 
            cout << it->first << " " << "NO BONUS" << endl;
    }
}