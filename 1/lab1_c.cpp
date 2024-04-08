#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b = a % 2;
    int c = a / 2;
    int d = c % 2;
    int e = c / 2;
    int f = e % 2;
    int g = e / 2;
    int h = g % 2;
    int i = b*8;
    int k = d*4;
    int l = f*2;
    int q = g*1;
    cout << i+k+l+q << endl;
    return 0;
}