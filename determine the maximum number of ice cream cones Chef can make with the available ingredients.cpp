#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    // The maximum number of ice cream cones is the minimum of cones and scoops
    int maxC = min(X, Y);
    cout << maxC << endl;

    return 0;
}
