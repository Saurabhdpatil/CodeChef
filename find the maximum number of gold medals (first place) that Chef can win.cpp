#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, a, b;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> a >> b;
	    if((x == a && y == b) || (x == b && y == a)) {
	        cout << "0" << endl;
	    }
	    else if((x != a && y != b) && (x != b && y != a)) {
	        cout << "2" << endl;
	    }
	    else {
	        cout << "1" << endl;
	    }
	}
}
