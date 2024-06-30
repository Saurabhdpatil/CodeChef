#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	int c = a + b + ( a * b);
	if ( c == 111 ){
	    cout <<"YES";
	}
	else {
	    cout <<"NO";
	}
	return 0;
}
