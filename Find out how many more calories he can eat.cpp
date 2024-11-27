#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	int tot=x-(y*z);
	if(y*z > x){
	    cout<<"-1"<<endl;
	}
	else{
	    cout<<tot<<endl;
	}

}
