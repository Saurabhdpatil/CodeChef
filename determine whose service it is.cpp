#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int P, Q;
        cin >> P >> Q;  // Scores of Alice and Bob

        int total_points = P + Q;           // Total points scored
        int serve_turn = total_points / 2;  // Number of "serve cycles"

        // Determine whose serve it is
        if (serve_turn % 2 == 0) {
            cout << "Alice" << endl;  //  ven -> Alice's serve
        } else {
            cout << "Bob" << endl;    // Odd -> Bob's serve
        }
    }

    return 0;
}
