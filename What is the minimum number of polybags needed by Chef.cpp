#include <bits/stdc++.h>  // Includes all standard libraries
#include <cmath>          // For math functions like ceil()
using namespace std;

int main() {
    int t, n;
    cin >> t;            // Read number of test cases
    while (t--) {        // Loop through each test case
        cin >> n;        // Read the value of n
        int tot = ceil(n / 10.0);  // Divide n by 10 and round up
        cout << tot << endl;       // Output the result
    }
}
