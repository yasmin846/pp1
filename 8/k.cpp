#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a, n, k;
    int sum = 0;
    cin >> a;
    vector<int> b;
    for(int i = 0; i<a; i++){
        cin >> n;
        b.push_back(n);
    }
    cin >> k;
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for(int i = 0; i<k; i++){
        sum += b[i];
    }
    cout << sum << endl;
    return 0;
}