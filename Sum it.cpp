#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        int sum = x + y;
        if ( sum == z ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
	

}
