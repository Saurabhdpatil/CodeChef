#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        if (sum > 6){
            cout<<"YES"<<" ";
        }
        else{
            cout<< "NO"<<" ";
        }
    }
	return 0;
}
