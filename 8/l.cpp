#include <iostream>
#include <set>
using namespace std;
int main(){
    int a, n;
    cin >> a;
    set<int> b;
    set<int>:: iterator it = b.begin();
    for(int i = 0; i<a; i++){
        cin >> n;
        b.insert(n);
    }
    cout << b.size() << endl;
    return 0;
}