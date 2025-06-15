#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,inisell_price, profit;
	cin>>t;        // number of test cases
	while(t--){
	    cin>>inisell_price>>profit;// input selling price & profit
	    int result = (0.1) * inisell_price;    // 10% of selling price
	    int new_profit = (inisell_price + result) - (inisell_price - profit);      // calculate new profit
	    
	    cout<<new_profit<<endl; // output result
	}
	return 0;

}
