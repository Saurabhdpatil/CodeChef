#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main() {
    int t, number;
    cin >> t;  // Input number of test cases
    
    while(t--) {
        cin >> number;            // Input the number
        int result = sqrt(number);  // Calculate square root
        cout << result << endl;   // Output the result
    }

    return 0;
}
