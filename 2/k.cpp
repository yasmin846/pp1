#include <iostream>
using namespace std;
int main() {
  int i = 1;
  int N;
  cin >> N;
  while (i*i<=N) {
    cout << i*i << endl;
    i++;
  }
  return 0;
}