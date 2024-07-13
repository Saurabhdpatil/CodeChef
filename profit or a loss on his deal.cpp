#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if (y > x){
	        cout<<"PROFIT"<<endl;
	    }
	    else if (x == y){
	        cout<<"NEUTRAL"<<endl;
	    }
	    else{
	        cout<<"LOSS"<<endl;
	    }
	    
	}

}
