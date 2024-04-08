#include <iostream>
using namespace std;
int cnt = 0;
void show(int a){
    cout << ++cnt << " ";
    if(cnt == a)
        return;
    show(a);
}
int main(){
    int a;
    cin >> a;
    show(a);
}