#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin >> t; // Read the number of test cases

    while (t--) { // Loop through each test case
        cin >> x; // Read the value of x

        if(x % 4 == 0) { // Check if x is perfectly divisible by 4
            cout << x / 4 << endl; // Print the result of x divided by 4
        } else {
            cout << (x / 4) + 1 << endl; // If not perfectly divisible, add 1 to the result
        }
    }
    
    return 0;
}
