#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if ( a && b <=2 ){
            int A = a+b;
            cout<<A<<endl;
        }
        else{
            int B = a+b;
            cout<<B<<endl;
        }
        
    }
	
	return 0;
}
