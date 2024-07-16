#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,b1,b2,b3;
	cin>>t;
	while(t--){
	    cin>>b1>>b2>>b3;
	    int sum = b1+b2+b3;
	    if(sum >= 2){
	        cout<<"Not Now"<<endl;
	    }
	    else{
	        cout<<"Water filling time"<<endl;
	    }
	}

}
