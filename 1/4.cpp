#include <iostream>
using namespace std;
int main() {
    //print out last digit of given integer number from 10 to 99 (2 digit num)
    /*
    12%10
    2

    78%10
    8

    56%10
    6
    */
    int n;
    cin >> n;
    int result = n%10;
    cout << result;
    return 0;
}