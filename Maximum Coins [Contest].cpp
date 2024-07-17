#include <bits/stdc++.h>
#include<cmath>  
using namespace std;

int main() {
	int t,n,x,i;
	cin>>t;
	
	while(t--){
	    cin>>n>>x;
	    int coinwin = 0;
	    int coinlost = 0;
	    for(i=1;i<=n;i++){
	        int power = 1 << i;
	        if(i<=n-x){
	            coinlost = power + coinlost;
	        }
	        else{
	            coinwin = power + coinwin;
	        }
	    }
	    int total = coinwin - coinlost;
	    cout<<total<<endl;
	}

}
