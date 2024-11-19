#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,d,l,r;
	cin>>t;
	while(t--){
	    cin>>d>>l>>r;
	    if(d>=l && d<=r){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(d<=l && d<=r){
	        cout<<"Too Early"<<endl;
	    }
	    else{
	        cout<<"Too Late"<<endl;
	    }
	}
	return 0;
}
