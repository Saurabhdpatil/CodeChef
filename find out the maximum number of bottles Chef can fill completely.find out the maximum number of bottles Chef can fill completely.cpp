#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Read n, x, and k
        int d = a * b;
        if(d < c){
            cout<<a<<endl;
        }
        else{
            cout<<c/b<<endl;
        }
        
    }
    
}
