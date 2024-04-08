#include <iostream>
using namespace std;
int main() {
  int i, n;
  int k = 0;
  int arr[100];
  cin >> n;
  for (i = 0; i < n; ++i){
    cin >> arr[i];
  }
  for (i = 0; i < n; ++i){
    if (arr[i]%10 == 0)
      k+=1;
    if ((arr[i]/10)%10 == 0 && arr[i]>99)
      k+=1;
    if ((arr[i]/100)%10 == 0 && arr[i]>99)
      k+=1;
    if ((arr[i]/1000)%10 == 0 && arr[i]>999)
      k+=1;
  }
  cout << k << endl;
  return 0;
}