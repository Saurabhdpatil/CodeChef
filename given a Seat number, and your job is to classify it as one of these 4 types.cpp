#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,seatno;
	cin>>t;
	while(t--){
	    cin>>seatno;
	    if(seatno<=15){
	        if(seatno<=10){
	            cout<<"Lower Double"<<endl;
	        }
	        else{
	            cout<<"Lower single"<<endl;
	        }
	        
	    }
	    else{
	        if(seatno>=16 && seatno<=30){
	            if(seatno<=25){
	                cout<<"Upper Double"<<endl;
	            }
	            else{
	                cout<<"Upper Single"<<endl;
	            }
	        }
	    }
	}
	return 0;
}
