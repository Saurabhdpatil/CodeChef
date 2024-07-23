#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>x>>y;
	    int p = x * y;  //possible to read in given days
	    if(p >= n ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
