#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t; // Number of test cases

    while (t--) {
        cin >> n; // Size of the array
        int arr[n]; // Array to store numbers
        int count1[n]; // Array to count based on conditions
        
        // Input values into the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Process each element and assign to count1
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 1000) {
                count1[i] = 1; // Mark as 1 if value is >= 1000
            } else {
                count1[i] = 0; // Mark as 0 otherwise
            }
        }

        // Calculate the sum of count1 array
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += count1[i]; // Add all the values in count1
        }

        // Output the sum
        cout << sum << endl;
    }

    return 0;
}
