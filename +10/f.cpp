#include <iostream>
#include <algorithm>
using namespace std;
int isTasty(string s){
    int sum = 0;
    for(int i = 0; i<s.size(); i++){
        sum += (int)s[i];
    }
    return sum;
}
int main(){
    string s;
    cin >> s;
    int sum1 = isTasty(s);
    if(sum1> 300)
        cout << "It is tasty!";
    else
        cout << "Oh, no!";
    return 0;
}