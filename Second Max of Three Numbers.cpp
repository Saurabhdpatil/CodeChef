#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y,z;
	cin>>n;
	while(n--){
	    cin>>x>>y>>z;
	    int a=max({x,y,z});
	    int b=min({x,y,z});
	    int sum=x+y+z;
	    int max = sum-a-b; //second max no 
	    cout<<max<<endl;
	    
	}
	return 0;
}
