#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>=y){
	        cout<<"0"<<endl;
	    }
	    else{
	        int extra= y -x;
	        cout<<extra<<endl;
	    }
	}
	return 0;
}
