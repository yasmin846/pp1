#include <iostream>
using namespace std;
long long my_pow(int exp){
    int res = 1;
    if(exp==0){
        return 1;
    } else {
        for(int i = 0; i<exp; i++){
            res = res*2;
        }
    }
    return res;
}
int main(){
    long long exp;
    cin >> exp;
    cout << my_pow(exp) << endl;
    return 0;
}