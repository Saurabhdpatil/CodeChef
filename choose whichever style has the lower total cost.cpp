#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x1,y1,x2,y2;
	cin>>t;
	while(t--){
	    cin>>x1>>y1>>x2>>y2;
	    int tot1 = x1+y1;
	    int tot2 = x2+y2;
	    if(tot1<=tot2){
	        cout<<tot1<<endl;
	    }
	    else{
	        cout<<tot2<<endl;
	    }
	}
	return 0;
}
