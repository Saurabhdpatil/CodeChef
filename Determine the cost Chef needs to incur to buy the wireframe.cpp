#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,x;
	cin>>t;
	while(t--){
	    cin>>n>>m>>x;
	    int tot= 2*n+2*m;
	    int cost = tot*x;
	    cout<<cost<<endl;
	}
	return 0;

}
