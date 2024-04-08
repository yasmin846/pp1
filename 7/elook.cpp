#include <iostream>
using namespace std;
bool degree(int a, int b = 1){
    if(a == b){
        return true;
    }
    if(a<b){
        return false;
    }
    return degree(a, 2*b);
}
int main(){
    int a;
    cin >> a;
    if(degree(a) == true){
        cout << "Yes" << " ";
    } else {
        cout << "No";
    }
}