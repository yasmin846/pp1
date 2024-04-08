#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> d(n);
    for(int i=0; i<n; i++)
        cin>>d[i];
    reverse(d.begin(), d.end());
    rotate(d.begin(), d.begin()+(n-m), d.end());
    for(int i:d)
        cout << i << " ";
}