#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(m==0){
	        cout<<2*n<<endl;
	    }
	    else if(n>m){
	        cout<<(n-m)+n<<endl; 

	    }
	    else{
	        cout<<n<<endl;
	        
	    }
	    
	}
    return 0;
}
