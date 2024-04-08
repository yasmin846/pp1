#include <iostream>
using namespace std;
bool lucky(int a, int chet, int num){
    a = num%10;
    while(num>0){
        if(num%10 >=0){
            chet += num%10;
            num = num/10;
        }
    }
    if(chet%a == 0){
        return true;
    } else {
        return false;
    }
}
int main(){
    int a = 0, chet = 0, num;
    cin >> num;
    if(lucky(a, chet, num) == true){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}