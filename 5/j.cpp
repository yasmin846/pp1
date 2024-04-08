#include <iostream>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1;
    for(int i = s1.size() - 1; i >= 0; i--){
            s2.push_back(s1[i]);
        }
    if(s1 == s2){
        cout << "YES";
    }
    else{
        s1.push_back(s1[0]);
        for(int i = s1.size() - 1; i >= 0; i--){
            s3.push_back(s1[i]);
        }
        if(s3 == s1) cout << "YES";
        else cout << "NO";
    }
}