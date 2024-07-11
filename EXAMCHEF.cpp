#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z,t;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    x = x * y;
	    if( z > x/2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
