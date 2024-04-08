#include <iostream>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  if(n>k && (2*n)%k == 0){
    cout << (2*n)/k << endl;
  } else if (n>k && (2*n)/k != 0){
    cout << (2*n)/(k-1) << endl;
  } else if (n<k){
    cout << "2" << endl;
  }
  return 0;  
}