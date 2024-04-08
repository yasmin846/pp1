#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int k;
    cin >> k;
    float result = sqrt(k);
    if (result == int(result)){
        cout << "Yes";
    } else{
        cout << "No";
    }
    return 0;
}