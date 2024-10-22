#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin >> t; // Input number of test cases
    while(t--) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3; // Input three integers

        // Initialize the minimum with the first number
        int min = num1;
        
        // Update minimum if num2 is smaller
        if(num2 < min) {
            min = num2;
        }
        
        // Update minimum if num3 is smaller
        if(num3 < min) {
            min = num3;
        }

        // Calculate the sum of the two largest numbers
        int tot = num1 + num2 + num3 - min;

        // Output the result
        cout << tot << endl;
    }

    return 0;
}
