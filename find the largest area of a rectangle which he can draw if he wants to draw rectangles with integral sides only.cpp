#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Ink left for the current test case

        int max_area = 0;
        
        // Iterate through possible values for 'a'
        for (int a = 1; a <= N / 4; ++a) {
            int b = (N / 2) - a;
            if (b > 0) {
                max_area = max(max_area, a * b);
            }
        }

        cout << max_area << endl;
    }

    return 0;
}
