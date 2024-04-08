#include <iostream>
#include <stack>
using namespace std; 
int maxarea(int h[], int m){ 
    stack<int> s; 
    int max_area = 0; 
    int tp;
    int area_with_top;
    int i = 0; 
    while (i < m) {
        if (s.empty() || h[s.top()] <= h[i]) 
            s.push(i++); 
        else { 
            tp = s.top(); 
            s.pop();
            area_with_top = h[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    }  
    while (s.empty() == false){ 
        tp = s.top(); 
        s.pop(); 
        area_with_top = h[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
        if (max_area < area_with_top)  
            max_area = area_with_top; 
    }
    return max_area; 
} 
int main() { 
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) 
        cin >> h[i];
    int m = sizeof(h)/sizeof(h[0]); 
    cout << maxarea(h, n);
}