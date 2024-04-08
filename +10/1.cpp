#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int result = numbers[0];
    for (int i = 1; i < n; ++i) {
        result = gcd(result, numbers[i]);
    }

    cout << result << endl;

    return 0;
}
