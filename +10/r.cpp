#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int pro(int* arr, int n) {
    int maxGCD = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (maxGCD < GCD(arr[i], arr[j])) {
                maxGCD = GCD(arr[i], arr[j]);
            }
        }
    }
    return maxGCD;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    cout << pro(arr, n);

    return 0;
}




c---->



#include <iostream>
using namespace std;

int main() {
    int n, xor_result;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    xor_result = arr[0];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        xor_result = xor_result ^ arr[i];
    }

    if ((xor_result & (xor_result - 1)) == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}


e---->


#include <iostream>
#include <string>
using namespace std;

void decToHex(int n) {
    string hex = "";

    while (n != 0) {
        int remainder = n % 16;
        if (remainder >= 10 && remainder <= 15) {
            hex = char('A' + remainder - 10) + hex;
        } else {
            hex = char('0' + remainder) + hex;
        }
        n /= 16;
    }

    cout << hex;
}

int main() {
    int n;
    cin >> n;

    decToHex(n);

    return 0;
}



f----->


#include <iostream>
using namespace std;

int isTasty(string s) {
    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        sum += int(s[i]);
    }

    return sum;
}

int main() {
    string dish;
    cin >> dish;
    int check = isTasty(dish);

    if (check > 300) {
        cout << "It is tasty!";
    } else {
        cout << "Oh, no!";
    }

    return 0;
}



g----->


#include <iostream>
using namespace std;

void printTotalNumberAndTheMaximumNumberOfChips(int arr[], int n){
    int max = -99999999;
    int total = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << total << " " << max; 
    return;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    printTotalNumberAndTheMaximumNumberOfChips(arr, n);
}









h--->
#include <bits/stdc++.h>
using namespace std;
 
void reverse(string& str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    string str;
    cin >> str;
    reverse(str);
    cout << str;
    return 0;
}







i---->
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;

    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            sum += s[i] - '0';
        }
    }

    cout << sum;
    return 0;
}








j----->
#include <iostream>
#include <map>
using namespace std;
const long long mx = 10e5;
int main(){
    int n;
    cin>>n;
    int a[n];
    map<int, bool>mp;
    bool in[mx] = {false};
    for(int i=0; i<n; i++){
        cin>>a[i]; 
        for(int j=0; j<i; j++) mp[a[i]+a[j]]=true;
    }
    int m;
    cin>>m;
    int res=0;
    for(int i=0; i<m; i++){
        cin>>res;
        if(mp[res]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x; 
    cin>>x;
    vector<int>arr1(x);
    for(int i=0;i<x;i++){
        cin>>arr1[i];
    } 
    int y;
    cin>>y;
    vector<int>arr2(y);
    for(int i=0;i<y;i++){
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<y;i++){
        int left=0;
        int right=x-1;
        int amount=0;

        while(left<right){
            int sum=arr1[left]+arr1[right];
            if(sum==arr2[i]){
                amount++;
                break;  
            }else if(sum>arr2[i]){
                right--;
            }else{
                left++;
            }
        }
        if(amount>0){
            cout<<"YES"<< endl;
        }else{
            cout<<"NO"<< endl;
        }
    }
    return 0;
}