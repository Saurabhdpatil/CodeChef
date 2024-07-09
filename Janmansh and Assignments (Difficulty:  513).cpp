#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	int req = 10;
	cin>>t;
	while(t--){
	    cin>>x;
	    int time = req - x;
	    if(time >= 3){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
