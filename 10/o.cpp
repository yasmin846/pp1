#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void bin(int x){
    string b;
    while(x){
        b += to_string(x%2); 
        x/=2;
    }
    reverse(b.begin(), b.end());
    cout << b << endl;
}
int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    for_each(d.begin(), d.end(), bin);
}