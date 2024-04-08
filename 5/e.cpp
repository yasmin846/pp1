#include <iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    int sum_even = 0;
    int sum_odd = 0;
    for(int i=0; i<n.size(); i++){
        if(i%2 == 0){
            sum_even += n[i];
        } else {
            sum_odd += n[i];
        }
    }
    if(sum_odd == sum_even){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}