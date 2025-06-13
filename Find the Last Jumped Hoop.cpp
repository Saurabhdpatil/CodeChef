#include <iostream>
using namespace std;

int main() {
    int t, n; // Test cases, hoops
    cin >> t;  // Input test cases

    while (t--) {
        cin >> n;   // Input hoops
        cout << (n / 2 + 1) << '\n'; // Calculate and output middle
    }
    return 0; // End
}
