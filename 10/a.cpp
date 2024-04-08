#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> f(n); 
    vector<int> s(n);
    for(int i=0; i<n; i++){
        cin>> f[i] >> s[i];
    }
    sort(f.begin(), f.end()); 
    sort(s.begin(), s.end());
    for(int i=0; i<n; i++){
        cout<<f[i]<<" "<<s[i]<<"\n";
    }
}