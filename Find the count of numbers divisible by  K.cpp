#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    int count = 0; // Declare count outside the loop to track the total count

    for (int i = 0; i < n; i++) { // Loop from 0 to n-1 to get n inputs
        cin >> x;
        if (x % k == 0) { // Check if x is divisible by k
            count += 1; // Increment count if divisible
        }
    }
    
    cout << count << endl; // Output the total count
    return 0;
}
