#include <iostream>
using namespace std;
int main() {
    //variables
    //data type: int, float, double, string
    /*
    allowed symbols: [a-zA-Z0-9]

    correct names:
        -num123, my_number, MyNumber, MAX_VALUE
    incorrect names:
        1num, my number, num$%^, 12, int
    */
    //int num1 - find place for this element in the memory of the computer
    int num1 = 2; //go find place for int and store that its 2
    int num2 = 3;
    int result = num1 + num2; //find these two elements and solve
    cout << result << endl;

    return 0;
}
cout << "Please, enter two integer numbers...";
//cin: console/terminal input