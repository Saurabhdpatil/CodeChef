#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;  // Read number of test cases
    while (t--) {
        cin >> x >> y;  // Read values of x and y for each test case
        if (x <= y) {
            int count = y / x;  // Calculate how many times x fits into y
            if (y % x == 0) count--;  // Adjust if y is an exact multiple of x
            cout << count << endl;  // Output the result
        } else {
            cout << "0" << endl;  // If x > y, no valid counts exist
        }
    }
    return 0;
}
