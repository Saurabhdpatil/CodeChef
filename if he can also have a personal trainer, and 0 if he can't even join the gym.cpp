#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int tot=x+y;
	    if(z>=x && z>=y &&z>=tot){
	        cout<<"2"<<endl;
	    }
	    else if(z>=x){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}

}
