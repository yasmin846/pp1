#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a, n;
    cin >> a;
    vector<int> b;
    for(int i = 0; i<a; i++){
        cin >> n;
        b.push_back(n);
    }
    int c, d;
    cin >> c >> d;
    reverse(b.begin() + c, b.begin() + d + 1);
    for(int i = 0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    return 0;
}