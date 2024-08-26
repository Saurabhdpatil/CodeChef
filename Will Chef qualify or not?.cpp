#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int a = y * 1;  // Points from y (1 point each)
        int b = z * 2;  // Points from z (2 points each)
        int tot = a + b;  // Total points
        if (tot >= x) {  // Check if total points are greater than or equal to x
            cout << "Qualify" << endl;
            
        } else {
            cout << "NotQualify" << endl;
            
        }
	    
	}
	return 0;
}
