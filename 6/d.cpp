#include <iostream>
using namespace std;
void find(int ar[], int n, int x){
    for(int i=0; i<n; i++){
        if(ar[i]==x){
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}
int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    } 
    int x;
    cin >> x;   
    find(ar, n, x);
    return 0;
}