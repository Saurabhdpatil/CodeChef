#include <bits/stdc++.h>
using namespace std;

int evenVsOddDivisors(int N) {
    int evenCount = 0, oddCount = 0;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) { // i is a divisor of N
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    
    if (evenCount > oddCount) return 1;
    else if (evenCount == oddCount) return 0;
    else return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << evenVsOddDivisors(N) << endl;
    }
    return 0;
}
