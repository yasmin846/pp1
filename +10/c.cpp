#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int num = 0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        num ^= arr[i];
    }
    int p = log2(num);
    if(pow(2, p) == num)
        cout << "YES";
    else
        cout << "NO";
    return 0;
    
}