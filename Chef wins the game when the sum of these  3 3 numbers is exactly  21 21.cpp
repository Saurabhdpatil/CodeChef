#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t; // Input number of test cases
    while(t--) {
        cin >> a >> b; // Input values of a and b for each test case
        bool found = false; // Flag to track if tot == 21 condition is met
        for(int i = 1; i <= 10; i++) {
            int tot = a + b + i; // Calculate total a + b + i
            if(tot == 21) {
                cout << i << endl; // Output i if tot equals 21
                found = true;
                break; // Exit loop once condition is met
            }
        }
        if(!found) {
            cout << "-1" << endl; // Output -1 if no valid i found
        }
    }
    return 0;
}
