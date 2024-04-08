#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    int frst[n]; for(auto i=0; i<n; i++)cin>>frst[i];
    cin>>m;
    int scnd[m];
    for(auto i=0; i<m; i++) cin>>scnd[i];
    int thrd[n+m];
    int last_pointer_of_first = sizeof(frst)/sizeof(frst[0]), last_pointer_of_second = sizeof(scnd)/sizeof(scnd[0]); 
    merge(frst, frst+last_pointer_of_first, scnd, scnd +last_pointer_of_second, thrd);
    for(int i:thrd) cout<<i<<" ";
}
/*int n, m;
    cin>>n;
    int frst[n]; for(auto i=0; i<n; i++)cin>>frst[i];
    cin>>m;
    int scnd[m];
    for(auto i=0; i<m; i++) cin>>scnd[i];
    int thrd[n+m];
    for(auto i=0; i<n; i++)
        thrd[i] = frst[i];
    for(int i=0; i<m; i++) thrd[n+i]=scnd[i];
    int z=sizeof(thrd)/sizeof(int);
    sort(thrd, thrd+z);
    for(int i=0; i<n+m; i++) cout<<thrd[i]<<" ";
    
}
*/