#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,x;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>x;
	    if(a+b>=x || b+c>=x || c+a>=x ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
