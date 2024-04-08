#include <iostream>
using namespace std;
int main() {
  int i, n;
  int odd = 0, even = 0;
  int arr[100];
  cin >> n;
  for (i = 0; i < n; ++i){
    cin >> arr[i];
  }
  for (i = 0; i < n; ++i){
    if (arr[i]%2 == 0)
        even+=1;
     else 
        odd+=1;
  }
  cout << even << " " << odd << endl;
  return 0;
}