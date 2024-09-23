#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, x, y;
    cin >> t; // Read the number of test cases

    while (t--) {
        cin >> a >> b >> x >> y; // Input values for 'a', 'b', 'x', and 'y'

        // Case when 'a' is less than 'b'
        if (a < b) {
            int hot; // Calculate the difference (hotness)
            if (x >= abs(a - b)) {
                cout << "Yes" << endl; // Condition met, print 'Yes'
            } else {
                cout << "No" << endl; // Condition not met, print 'No'
            }
        }
        // Case when 'b' is less than or equal to 'a'
        else if (b <= a) {
            int cold; // Calculate the difference (coldness)
            if (y >= abs(a - b)) {
                cout << "Yes" << endl; // Condition met, print 'Yes'
            } else {
                cout << "No" << endl; // Condition not met, print 'No'
            }
        }
        // Case when 'a' is equal to 'b'
        else if (a == b) {
            cout << "Yes" << endl; // Print 'Yes' since both are equal
        }
    }
}
