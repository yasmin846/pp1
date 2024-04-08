#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int n;
    int size=0;
    cin >> n;
    if(n%2 == 0) 
        size = n*(n/2)+n/2;
    else 
        size = n*(n/2+1);
    vector<int> progression(size);
    for(int i=1; i<=n; i++){
        int start = 0;
        if((i-1)%2 == 0) 
            start = (i-1)*((i-1)/2) + (i-1)/2;
        else 
            start = (i-1)*((i-1)/2+1);
        fill(progression.begin() + start, progression.begin() + i + start, i);
    }
    for(int i:progression)
        cout << i << " ";
}