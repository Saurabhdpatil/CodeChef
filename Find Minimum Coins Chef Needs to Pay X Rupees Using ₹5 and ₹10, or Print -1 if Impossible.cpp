#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x%10==0){
	        int tot = x/10;
	        cout<<tot<<endl;
	    }
	    else if (x%5==0){
	        int tot = (x/10)+1;
	        cout<<tot<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
