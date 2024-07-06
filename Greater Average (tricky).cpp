#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,A,B,C;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C;
	    int avg=A+B;       //a+b should be greater than 2*c then satisfied this condition and print yes neither no
	    if ( avg > 2*C ){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
