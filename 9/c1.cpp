#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    map <int, int> m;
    map <int, int > :: iterator it;
    for(int i = 0; i < n; i++){
        cin >> a;
        m[a]++;
    }
    int cnt = 0;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second > 1){
            cnt++;
        }
    }
    cout << cnt << " ";
    return 0;
}