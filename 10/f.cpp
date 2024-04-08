#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double f, s, t, c;
    double kr = 0;
    double sum=0;
    for(int i=0; i<n; i++){
        cin >> f >> s >> t >> c;
        kr += c; 
        int sm = f + s + t;
        if(f+s >= 30 && t >= 20){
            sum += (((sm-50)/5) * 1.0/3.0 + 1.0)*c;
        }
    }
    cout << (sum/kr);
}