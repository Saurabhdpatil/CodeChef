#include <iostream>
#include <cmath> // Required for the round() function
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B; // Number of slices for Alice and Bob
        cin >> A >> B;
        
        int totalSlicesEaten = 0;

        // While Alice and Bob are unhappy
        while (A != B) {
            if (A > B) {
                int slicesEaten = (A + 1) / 2; // Half of Alice's slices, rounded up
                totalSlicesEaten += slicesEaten;
                A -= slicesEaten;
            } else {
                int slicesEaten = (B + 1) / 2; // Half of Bob's slices, rounded up
                totalSlicesEaten += slicesEaten;
                B -= slicesEaten;
            }
        }
        
        cout << totalSlicesEaten << endl;
    }
    
    return 0;
}
