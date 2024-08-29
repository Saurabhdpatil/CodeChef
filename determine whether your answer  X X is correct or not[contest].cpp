#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,k;
	cin>>x>>y>>k;
	int difference=abs(x-y);
	if(difference<=k){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}

}
