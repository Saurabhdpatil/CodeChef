#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,k;
	cin>>t;
	while(t--){
	    cin>>n>>x>>k;
	    int tot = n * x;  // total money required for take burger to each n frineds.
	    if( tot <= k){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;

}
