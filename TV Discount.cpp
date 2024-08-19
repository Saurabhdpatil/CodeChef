#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    int cost1=a-c; //tv1  discount
	    int cost2=b-d; //tv2 discount
	    if(cost1 < cost2){
	        cout<<"FIRST"<<endl;
	    }
	    else if(cost1 == cost2){
	        cout<<"ANY"<<endl;
	    }
	    else{
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;

}
