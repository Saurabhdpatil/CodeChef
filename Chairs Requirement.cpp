#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if (x >= y){
	        int req = x - y;
	        cout<<req<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}

}
