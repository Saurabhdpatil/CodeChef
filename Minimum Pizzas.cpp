#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    int a = n*x;
	    if(a%4==0){
	        cout<<(a/4)<<endl;
	    }
	    else{
	        cout<<(a/4)+1<<endl;
	    }
	}

}
