#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        int R, G, B;
        cin >> R >> G >> B;

        // Find the maximum count and the sum of the other two
        int maxCount = max(R, max(G, B));
        int sumOther = R + G + B - maxCount;

        // Check the feeding condition
        if (maxCount <= sumOther) {
            cout << "YES" << endl;  // Possible to feed butterflies
        } else {
            cout << "NO" << endl;   // Not possible to feed butterflies
        }
    }
    return 0;
}
