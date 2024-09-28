#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t; // Reading the number of test cases
    while (t--) {
        cin >> n; // Reading the size of the array
        int count = 0; // Initialize count for each test case
        int arr[n]; // Declare the array of size n
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read the array elements
            if (arr[i] >= 10 && arr[i] <= 60) {
                count++; // Count numbers in the range [10, 60]
            }
        }
        cout << count << endl; // Output the count after the loop
    }
    return 0;
}
