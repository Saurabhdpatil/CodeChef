#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x>6){
	        cout<<"GOLD"<<endl;
	    }
	    else if(x>3 && x<=6){
	        cout<<"SILVER"<<endl;
	    }
	    else{
	        cout<<"BRONZE"<<endl;
	    }
	    
	}
    
}
