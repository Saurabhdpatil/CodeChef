#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n; // Input the number
	
	if(n % 4 == 0) {
	    n += 1; // Increment n by 1 if divisible by 4
	}
	else {
	    n -= 1; // Decrement n by 1 if not divisible by 4
	}
	
	cout << n << endl; // Output the modified value of n
	
	return 0;
}
