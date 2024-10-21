#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n>=2){
	        int fav = 0;
	        for(int i=2 ;i<= n ; i+=7){
	             fav++;
	        }
	        cout<<fav<<endl;
	    }
	    else{
	            cout<<"0"<<endl;
	        }
	}
	return 0;
    
}
