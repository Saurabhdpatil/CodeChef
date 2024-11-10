#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, n;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] >= x) {
                count++;
            }
        }
        cout << count << endl; // Output count for each test case
    }
    return 0;
}
