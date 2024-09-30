#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t; // Input number of test cases
	while(t--) {
	    float a, x, b, y;
	    cin >> a >> x >> b >> y; // Input values for Alice and Bob
	    
	    float c = a / x; // Alice's rate
	    float d = b / y; // Bob's rate
	    
	    if(c > d) {
	        cout << "Alice" << endl; // Alice wins
	    }
	    else if(d > c) {
	        cout << "Bob" << endl; // Bob wins
	    }
	    else {
	        cout << "Equal" << endl; // Both are equal
	    }
	}
	return 0;
}
