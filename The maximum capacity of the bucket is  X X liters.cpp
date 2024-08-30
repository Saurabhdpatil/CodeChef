#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, w, x, y, z;
    cin >> t;
    while (t--) {
        cin >> w >> x >> y >> z;
        int tot = (w + (y * z));
        if (tot > x) {
            cout << "overflow" << endl;
        } else if (tot == x) {
            cout << "filled" << endl;
        } else {
            cout << "unfilled" << endl;
        }
    }
}
