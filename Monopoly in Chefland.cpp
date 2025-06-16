#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;   //no's of test cases.
    while(t--){
        cin>>a>>b>>c;   // input revenues.
        // check for monopolistic adv.
        if ( a > b + c || b > a + c || c > a + b ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
