#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, h, x, y;
    cin >> t;
    while (t--) {
        cin >> h >> x >> y;
        
        // Use the special attack to reduce the boss's health
        int remaining_health = h - y;
        
        if (remaining_health <= 0) {
            // If the boss's health is zero or less after the special attack
            cout << 1 << endl;
        } 
        else {
            // Calculate the number of normal attacks required
            int normal_attacks = (remaining_health + x - 1) / x; // Ceiling division
            cout << normal_attacks + 1 << endl; // +1 for the special attack
        }
    }
}
