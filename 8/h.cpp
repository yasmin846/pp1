#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a, n;
    cin >> a;
    vector<int> b;
    for(int i = 0; i<a; i++){
        cin >> n;
        b.push_back(n);
    }
    int k;
    cin >> k;
    sort(b.begin(), b.end());
    for(int i = 0; i<k; i++){
        cout << b[i] << " ";
    }
    return 0;
}