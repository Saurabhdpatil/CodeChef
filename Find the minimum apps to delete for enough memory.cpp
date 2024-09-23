#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s, x, y, z;
    cin >> t; // Read number of test cases

    while (t--) {
        cin >> s >> x >> y >> z; // Input values for 's', 'x', 'y', and 'z'

        // Check if sum of x, y, z exceeds 's'
        if (x + y + z > s) {
            // If 's' can accommodate either x+z or y+z
            if (s >= x + z || s >= y + z) {
                cout << "1" << endl; // Can accommodate in 1 round
            } else {
                cout << "2" << endl; // Requires 2 rounds
            }
        }
        // If 's' can accommodate all three (x, y, z)
        else {
            cout << "0" << endl; // No extra rounds required
        }
    }
    return 0; // Return successful execution
}
