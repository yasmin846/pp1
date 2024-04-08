#include <iostream>
using namespace std;
int main(){
    int year;
    int num;
    cin >> year;
    cin >> num;
    int lst = num % 10;
    int fst = num / 100;
    int result = year + lst + fst;
    cout << result << endl;
    return 0;
}