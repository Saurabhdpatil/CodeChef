#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x%3==0){
	        cout<<"Normal"<<endl;
	    }
	    else if(x%3==1){
	        cout<<"Huge"<<endl;
	    }
	    else{
	        cout<<"Small"<<endl;
	    }
	    
	}
    
}
