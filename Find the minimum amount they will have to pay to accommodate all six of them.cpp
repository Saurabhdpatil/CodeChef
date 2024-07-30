#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int tot1=x*3; //total charge of three double rooms.
	    int tot2=y*2; //total charge of  two triple  rooms.
	    if(tot1>=tot2){
	        cout<<tot2<<endl;
	    }
	    else{
	        cout<<tot1<<endl;
	    }
	}

}
