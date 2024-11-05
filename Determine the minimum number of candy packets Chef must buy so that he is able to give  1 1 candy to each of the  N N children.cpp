#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        if (x >= n) {
            cout << "0" << endl; // No additions needed if x is already >= n
        } else {
            int candie = x, count = 0;
            while (candie < n) {
                candie += 4; // Increment by 4 until candie >= n
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
