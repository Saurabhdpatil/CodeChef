#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(y>=x){
	        cout<<y-x<<endl;
	    }
	    else{
	        cout<<x-y<<endl;
	    }
	}
	return 0;
    
}
