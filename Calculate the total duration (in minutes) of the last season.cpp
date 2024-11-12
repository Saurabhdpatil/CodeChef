#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        int count1 = 0; // Start from zero if no initial count is needed
        int count2 = 0;
        
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                count1 += a; // Add 'a' on even iterations
            } else {
                count2 += b; // Add 'b' on odd iterations
            }
        }
        
        cout << count1 + count2 << endl;
    }
    return 0;
}
