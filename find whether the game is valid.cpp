#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n-x==0 && n%x==0 || x%n==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	
}
