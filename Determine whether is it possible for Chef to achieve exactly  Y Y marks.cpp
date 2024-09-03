#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>x>>y;
	    if (y%x == 0 && y/x <= n){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
