#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
int main(){
    int n, tp;
    cin >> n;
    vector<int> d(n);
    for (int i=0; i<n; i++){
        cin >> d[i];
    }
    vector<int> dup = d;
    reverse(dup.begin(), dup.end());
    for(int i=0; i<n; i++){
        if(d[i]==dup[i])
            cout << "OK" << endl;
        else 
            cout << "Instead of " << d[i] << " here was " << dup[i] << endl;
    }
}