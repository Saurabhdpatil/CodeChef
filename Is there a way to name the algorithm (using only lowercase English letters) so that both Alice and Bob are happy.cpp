#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;

    while (T--) {
        int N, M;  // lengths of Alice's and Bob's strings
        cin >> N >> M;

        string S_A, S_B;
        cin >> S_A >> S_B;

        bool used[26] = {false};  // Array to mark used letters (all start as false)

        // Mark letters used in Alice's string
        for (char c : S_A) {
            used[c - 'a'] = true;  // Mark the position of the letter as true
        }

        // Mark letters used in Bob's string
        for (char c : S_B) {
            used[c - 'a'] = true;  // Mark the position of the letter as true
        }

        // Check if there is any letter not used by Alice and Bob
        bool found_unused_letter = false;
        for (int i = 0; i < 26; i++) {
            if (!used[i]) {  // If a letter is not used, set the flag to true
                found_unused_letter = true;
                break;
            }
        }

        // Output result based on the flag
        if (found_unused_letter) {
            cout << "YES" << endl;  // If any letter is not used, print YES
        } else {
            cout << "NO" << endl;  // If all letters are used, print NO
        }
    }

    return 0;
}
