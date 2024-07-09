#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
        int n = b-a;
        if(n%3==0 || n%3==1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
