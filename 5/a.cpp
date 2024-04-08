#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i]>64 && s[i]<91){
            count++;
        } else if (s[i]>96 && s[i]<123){
            count1++;
        }
    }
    cout << count1 << " " << count;
    return 0;
}