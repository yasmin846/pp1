#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x, y;
    pair <int, int> a[1000];
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        a[i].first = x+y;
        a[i].second = i+1;

    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i].second << " ";
    }
    return 0;
}