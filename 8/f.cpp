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
    int k, l;
    cin >> k >> l;
    b.insert(b.begin()+k, l);
    for(int i = 0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    return 0;
}