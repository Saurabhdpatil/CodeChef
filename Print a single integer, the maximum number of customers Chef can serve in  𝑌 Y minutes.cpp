#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin >> x >> y;
	int stove = x; // no of stove to cook per minute.
	int time = y;  // no of time 
	int max = x * y;
	cout << max;  // maxim can no. of customer chef can serve in Y minutes.
	return 0;

}


//Input Format
//The first and only line of input contains two space-separated integers 
//𝑋 ,Y — the number of stoves and the number of minutes, respectively.


// Output Format
//Print a single integer, the maximum number of customers Chef can serve in 
//𝑌
//Y minute

//
