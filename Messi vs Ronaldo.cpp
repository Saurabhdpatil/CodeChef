#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,y;
	cin>>a>>b;
	int m = a*2+b; //messi
	cin>>x>>y;
	int r = x*2+y;  //ronaldo
	if (m>r){
	    cout<<"Messi"<<endl;
	}
	else if (r>m){
	    cout<<"Ronaldo"<<endl;
	}
	else{
	    cout<<"Equal"<<endl;
	}

}
