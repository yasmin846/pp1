#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int near(vector<int> num, int m){
    int index = 0;
    int diff1 = abs(m - num[0]);
    for(int i = 1; i< num.size(); i++){
        int diff2 = abs(m - num[i]);
        if(diff1 > diff2){
            diff1 = diff2;
            index = i;
        }
    }
    return index;
}
int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i<n; i++){
        cin >> num[i];
    }
    int m;
    cin >> m;
    cout << near(num, m) << endl;
    return 0;
}