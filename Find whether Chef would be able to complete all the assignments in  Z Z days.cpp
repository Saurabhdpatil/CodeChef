#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int tot=z*24*60;
	    int assi=x*y;  //assignment
	    if(assi<=tot){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
