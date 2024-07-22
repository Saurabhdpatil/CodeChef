#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int d = n * 50; //no of n glass sell.
	    int a = n * 10; //spend 20% of his total income on buying sugarcane.
	    int b = n * 10;  //spend 20% of his total income on buying salt & mint leaves.
	    int c = (d-(a+b))/2;  //spend 30% of his total income on shop rent.
	    int sum =a + b + c;
	    int profit = d - sum;
	    cout<<profit<<endl;
	   
	}
	return 0;
}
