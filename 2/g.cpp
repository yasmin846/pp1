#include <iostream>
using namespace std;
int main() {
  int i, n;
  int arr[100];
  cin >> n;
  for (i = 0; i < n; ++i){
    cin >> arr[i];
  }
  for (i = 0; i < n; ++i){
    if (arr[0] < arr[i])
      arr[0] = arr[i]; 
  }
  cout << arr[0] << endl;
  return 0;
}