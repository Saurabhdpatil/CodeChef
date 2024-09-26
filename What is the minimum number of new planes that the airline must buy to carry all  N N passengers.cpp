#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, n, y;   // t: test cases, x: value, n: number, y: calculated value
    cin >> t;
    while (t--) {
        cin >> x >> n;
        
        if (n % 100 == 0) {  // if n is a multiple of 100
            y = n / 100;
            if (y >= x) {
                cout << y - x << endl;  // print result if y >= x
            } else {
                cout << "0" << endl;   // print 0 if y < x
            }
        } else {
            y = n / 100;
            y++;  // increment y if n is not a multiple of 100
            if (y >= x) {
                cout << y - x << endl;  // print result if y >= x
            } else {
                cout << "0" << endl;    // print 0 if y < x
            }
        }
    }
    return 0;
}
