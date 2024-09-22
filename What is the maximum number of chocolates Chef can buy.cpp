#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>=y){
	        int tot=x/y;
	        cout<<tot<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;

}
