#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hyp(double a, double b, double d){
    d = sqrt(pow(a, 2)+pow(b, 2));
    return d;
}
int main(){
    double a, b;
    double d;
    cin >> a >> b;
    cout << setprecision(4) << hyp(a, b, d);
    return 0;
}