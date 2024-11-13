#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // Calculate the cost for each approach
    int individual_cost = 2 * X + 3 * Y;
    int cost_with_two_combos = 2 * Z + Y;
    int cost_with_one_combo = Z + X + 2 * Y;

    // Find the minimum of all approaches
    int min_cost = min({individual_cost, cost_with_two_combos, cost_with_one_combo});

    // Output the minimum cost
    cout << min_cost << endl;

    return 0;
}
