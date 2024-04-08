#include <iostream>
using namespace std;
int main(){
    int k, i;
    cin >> k;
    for(i=2; i*i<=k; i++){
        if (k%i==0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}