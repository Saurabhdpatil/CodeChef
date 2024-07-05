#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int lower=67;
	    int upper=45000;
	    if(x >= lower && x <=upper ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
