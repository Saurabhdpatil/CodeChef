#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        int maxNum = max(max(a, b), max(c, d));
        int tot = a + b + c + d;
        int remSum = tot - maxNum;
        if (maxNum > remSum) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
