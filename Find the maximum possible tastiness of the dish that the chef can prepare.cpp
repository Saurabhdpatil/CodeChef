#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    int tot=max(a,b)+max(c,d);
	    cout<<tot<<endl;
	}
	return 0;
}
