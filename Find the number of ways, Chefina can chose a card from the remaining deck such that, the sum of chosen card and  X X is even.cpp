#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        int EvenCount = n / 2;          // Total even cards from 1 to N
        int OddCount = n - EvenCount;    // Total odd cards from 1 to N

        // Adjust the count based on the card Chef threw
        if (x % 2 == 0) {
            // If X is even, Chefina needs another even card, so subtract one from evenCount
            cout << (EvenCount - 1) << endl;
        } else {
            // If X is odd, Chefina needs another odd card, so subtract one from oddCount
            cout << (OddCount - 1) << endl;
        }
    }

    return 0;
}
