#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,x;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x;
	    int tot = abs(a-b);
	    int yr = tot/x;
	    cout<<yr<<endl;
	}

}
