#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isPrime(int num){
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num%i == 0) {
            return false;
        }
    }
    return true;
}
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
    for(int i = 0; i<a; i++){
        if(b[i] > k && isPrime(b[i])){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}