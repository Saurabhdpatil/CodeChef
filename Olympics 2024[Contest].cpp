#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int gold = 0, silver = 0, bronze = 0;
    
    if (x < 5) {
        gold = 5 - x;
    }
    if (y < 5) {
        silver = 5 - y;
    }
    if (z < 5) {
        bronze = 5 - z;
    }
    
    int tot = gold + silver + bronze;
    cout << tot << endl;

    return 0;
}
