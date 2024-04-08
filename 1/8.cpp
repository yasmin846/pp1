#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //float a = sqrt(9);
    //float b = pow(2, 3); // power(base,exp) = base^exp
    //float c = min(5, max(2, 10));
    //float pi = 3.14;
    //float v = sin(90 * M_PI / 180); //only in radiants
    float b = cos(90 * M_PI / 180);
    // 6.12323e-17 -> 6.12 * 10^-17 -> 6.12/10^17 -> ~0


    //there is no ctg, we need to 1/tan
    cout << b << endl;
    return 0;
}