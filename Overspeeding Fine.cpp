#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x > 70 && x <= 100){
	        cout<<"500"<<endl;
	    }
	    else if (x > 100){
	        cout<<"2000"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}

}
