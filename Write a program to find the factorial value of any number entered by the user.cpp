#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int fact =1;
	    for(int i=1 ; i<=n ;i++){
	        fact *=i;
	        
	    }
	    cout<<fact<<endl;
	    
	}
    
}
