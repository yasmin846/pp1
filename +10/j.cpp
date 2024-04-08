#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for(int j = 0; j<m; j++){
        cin >> arr2[j];
    }
    set<int> s;
    for (int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
           s.insert(arr[i]+arr[j]);
        }
    }
    int cnt = 0;
    for(int i = 0; i<m; i++){
        if(s.find(arr2[i])!=s.end())
            cnt++;
        if(cnt>0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cnt = 0;
    }
    return 0;
}