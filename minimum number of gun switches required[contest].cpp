#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int N, D;
        cin >> N >> D;
        
        int A[N]; // Declare an array of size N
        
        // Read the target distances
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        int switchCount = 0;
        bool holdingCloseRangeGun = true; // Start with close-rang gun
        
        for (int i = 0; i < N; ++i) {
            if (A[i] <= D) {
                if (!holdingCloseRangeGun) {
                    // Switch to close-range gun
                    holdingCloseRangeGun = true;
                    switchCount++;
                }
            } else {
                if (holdingCloseRangeGun) {
                    // Switch to long-range gun
                    holdingCloseRangeGun = false;
                    switchCount++;
                }
            }
        }
        
        cout << switchCount << endl; // Output the switch count for this test case
    }
    
    return 0;
}
