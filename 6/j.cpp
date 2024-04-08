#include <iostream>
using namespace std;
int maxi(int a, int b, int c, int d, int mx){
    if(a>b && a>c && a>d){
        mx = a;
    } else if(b>a && b>c && b>d){
        mx = b;
    } else if(c>a && c>b && c>d){
        mx = c;
    } else {
        mx = d;
    }
    return mx;
}
int main(){
    int a, b, c, d, mx;
    cin >> a >> b >> c >> d;
    cout << maxi(a, b, c, d, mx);
    return 0;
}