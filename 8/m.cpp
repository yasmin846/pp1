#include <iostream>
#include <set>
using namespace std;
int main(){
    int a, n;
    int sum = 0;
    cin >> a;
    set<int> b;
    set<int>:: iterator it = b.begin();
    for(int i = 0; i<a; i++){
        cin >> n;
        b.insert(n);
    }
    for(it = b.begin(); it!=b.end(); it++){
        sum += *it;
    }
    cout << sum << endl;
    return 0;
}