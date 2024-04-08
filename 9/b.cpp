#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i<n; i++){
        cin >> s;
        if(s%2 == 0)
            a.push_back(s);
        else if(s%2 == 1)
            b.push_back(s);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    for(int i = 0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    return 0;
}