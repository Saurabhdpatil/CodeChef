#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        int x, y;
        cin >> x >> y;  // Read values of x and y

        int count = 0;  // Initialize step counter
        while (x < y) {  // Continue adding 8 until x >= y
            x += 8;
            count++;  // Increment the step counter
        }
        
        cout << count << endl;  // Output the number of steps
    }
}
