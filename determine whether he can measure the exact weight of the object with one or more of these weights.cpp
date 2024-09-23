#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,w,x,y,z;
	cin>>t;
	while(t--){
	    cin>>w>>x>>y>>z;
	    int a = x+y;
	    int b = x+z;
	    int c = y+z;
	    int d = x+y+z;
	    if(w==a || w==b || w==c || w==d || w==x || w==y || w==z){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;

}
