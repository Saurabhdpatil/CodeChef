#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	  
	    if((a/10) > (b/20)){
	        cout<<"FIRST"<<endl;
	    }
	    else if ((a/10) < (b/20)){
	        cout<<"SECOND"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}

}
