#include <iostream>
using namespace std;
int main(){
	int i, k;
	cin >> k;
    int arr[k];
	for( i= 0; i < k; ++i){
		cin >> arr[i];
	}
	for( i = 0; i < k; ++i){
		if(arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << arr[0] << endl;
	return 0;
}