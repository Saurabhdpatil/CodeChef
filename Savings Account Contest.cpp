#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int total = x * y;
	    if(total <= z){
	        cout<<"0"<<endl;
	    }
	    else{
	        int a = total - z;
	        int b = (a+y-1)/y;
	        cout<<b<<endl;
	    }
	}
}
	        
