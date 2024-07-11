#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,x,y;
	cin>>T;
	while(T--){
	    cin>>x>>y;
	    if ( y - x <= 2 && x - y <= 1 ){   // undersant this condition properly.
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
}
