#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cin >> n;
    int arr[n][n];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    int max2=arr[0][0];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (arr[i][j]> max){
                max2 = max;
                max = arr[i][j];
            }
            else if(arr[i][j]>max2 && arr[i][j]!=max)
                max2 = arr[i][j];
                
        }
    }
    if(max==max2) 
        cout  <<0;
    else 
        cout<<max2;
    return 0;
}