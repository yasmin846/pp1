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
    sort(b.begin(), b.end());
    cout << b[a-1] - b[0] << " ";
    return 0;
}