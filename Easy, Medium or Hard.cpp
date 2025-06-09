#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, x;
    cin >> p;  // Take number of test cases

    while (p--) {
        cin >> x;

        if (x >= 1 && x < 100) {
            cout << "Easy" << endl;
        }
        else if (x >= 100 && x < 200) {
            cout << "Medium" << endl;
        }
        else if (x >= 200 && x <= 300) {
            cout << "Hard" << endl;
        }
    }
    return 0;
}



codechef ai  ----------------------

  #include <iostream>
using namespace std;

int main() {
    int t, x;
    cin >> t;

    while (t--) {
        cin >> x;

        if (x < 100) {
            cout << "Easy" << endl;
        } else if (x < 200) {
            cout << "Medium" << endl;
        } else {
            cout << "Hard" << endl;
        }
    }
    return 0;
}
