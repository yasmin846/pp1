#include <iostream>
using namespace std;
bool sum(int a){
    while(a>0){
        if(a%10 >=0){
            if(a%2 == 1){
                return false;
            }
        }
        a = a/10;
    }
    return true;
}
int main(){
    int a;
    cin >> a;
    int result = sum(a);
    if(result == true){
        cout << "Valid";
    } else {
        cout << "Not valid";
    }
    return 0;
}