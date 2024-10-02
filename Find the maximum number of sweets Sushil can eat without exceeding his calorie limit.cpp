#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N, K;
        cin >> N >> K; // Number of sweets and calorie limit
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i]; // Calorie count of each sweet
        }

        int totalCalories = 0, count = 0;
        for (int i = 0; i < N; i++) {
            if (totalCalories + A[i] > K) break; // Stop if calorie limit is exceeded
            totalCalories += A[i]; // Add sweet's calories
            count++; // Increment count of sweets
        }

        cout << count << endl; // Output the result for each test case
    }

    return 0;
}
