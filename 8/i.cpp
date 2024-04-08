#include <iostream>
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
    int k; 
    cin >> k;
    int cnt = 0;
    for(int i = 0; i<b.size(); i++){
        if(b[i] == k){
            cnt++;
        }
    }
    if(cnt>=1){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}