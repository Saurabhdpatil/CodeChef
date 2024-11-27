#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Input number of test cases

    while (t--) {
        int N;
        cin >> N; // Input number of completed assignments

        int sum = 0; // To store the total score of completed assignments
        for (int i = 0; i < N; i++) {
            int score;
            cin >> score; // Input each assignment's score
            sum += score; // Add score to the total
        }

        int totMarks = (N + 1) * 100; // Maximum possible marks
        int requiredMarks = (totMarks + 1) / 2; // 50% of total marks
        int minScore = requiredMarks - sum; // Minimum score needed on the last assignment

        if (minScore > 100) {
            cout << -1 << endl; // Not possible to pass
        } else if (minScore <= 0) {
            cout << 0 << endl; // No more marks needed, Chef has already passed
        } else {
            cout << minScore << endl; // Output the minimum score needed
        }
    }

    return 0;
}
