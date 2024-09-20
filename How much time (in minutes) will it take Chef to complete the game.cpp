#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, z;
    cin >> t;  // Read the number of test cases.
    
    while (t--) {
        cin >> x >> y >> z;  // Read values for levels (x), time per level (y), and break time (z).

        // Case 1: If the number of levels is 3 or less
        if (x <= 3) {
            // Directly calculate the total time as no breaks are needed
            cout << x * y << endl;  
        } 
        // Case 2: If there are more than 3 levels
        else {
            int count = 0;  // Initialize total time.
            
            // Loop through all levels
            for (int i = 1; i <= x; i++) {
                count += y;  // Add time for each level.

                // Add break time after every 3rd level, except after the last level
                if (i % 3 == 0 && i != x) {
                    count += z;  // Add break time after 3 levels.
                }
            }
            // Output the total time including level times and breaks
            cout << count << endl;
        }
    }
}
