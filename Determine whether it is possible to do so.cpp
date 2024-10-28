#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;  // Read number of test cases
	while (t--) {
	    cin >> n >> m;  // Read n and m for each test case
	    int tot = n / m;  // Calculate quotient of n and m
	    
	    // Check if quotient is even or odd
	    if (n/m % 2 == 0 && n%m==0) {
	        cout << "yes" << endl;
	    } else {
	        cout << "no" << endl;
	    }
	}
	return 0;
}
