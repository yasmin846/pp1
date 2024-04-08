#include <iostream>
using namespace std;
void vowel(string s, string d){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
        
        }else if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'){
            
        }else{
            d+=s[i];
        }
    }
    cout << d;
    return;
}
int main(){
    string s, d;
    getline(cin, s);
    vowel(s,d);
    return 0;
}