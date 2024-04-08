#include <iostream>
#include <algorithm>
using namespace std;
void th(int n){
    int a[n];
    int b[n];
    int move = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i]; 
    }
    sort(a, a+n);
    sort(b, b+n);
    for(int i=0; i<n; i++){
        for(int j=move; j<n; j++){
            if(a[i]==b[j]){
                move = j+1;
                cnt++;
                break;
            }
        }
    }
    cout << cnt; 
}
int main(){
    int n;
    cin >> n;
    th(n);
}