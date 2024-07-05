#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
       if( m >= n){
        int ticket = (m-n)*0;
        cout<<ticket<<endl;
       }
       else{
        int ticket=n-m;
        cout<<ticket<<endl;
       }
    }
    return 0;
}
