#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // Calculate team points: 1 point for each win (X), 0.5 for each draw (Y)
    double teamPoints = X + Y * 0.5;
    // Calculate opponent points: 1 point for each loss (Z), 0.5 for each draw (Y)
    double opponentPoints = Z + Y * 0.5;

    // Number of games left to play
    int gamesLeft = 4 - (X + Y + Z);

    // If we can win all remaining games, check if our total points will be greater
    if (teamPoints + gamesLeft > opponentPoints)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
