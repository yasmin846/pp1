#include <iostream>
using namespace std;
void girls(float all, float g){
    cout << ((g*100)/all) << endl;
}
int main(){
    int all, g;
    cin >> all >> g;
    girls(all, g);
    return 0;
}