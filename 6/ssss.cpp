#include <iostream>

using namespace std;

bool NegR(int n, int cnt, int pos){
    pos = n % 10;
    while(n > 0){
        cnt += n % 10;
        n = n / 10;
    }
    
    if(cnt % pos == 0){
        return true;
    }
    return false;
    
}

int main(){
    int n, cnt = 0, pos=0;
    cin >> n;
    if(NegR(n, cnt, pos) == true){
        cout << "YES";
    }else
    cout << "NO";

    return 0;
}