#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int i = 0;
  int N;
  cin >> N;
  while (pow(2,i)<=N) {
    cout << pow(2, i) << " ";
    i++;
  }
  return 0;
}