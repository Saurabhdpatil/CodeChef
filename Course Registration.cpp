#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k,m;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;
        int tot=n+m;
        if(tot<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

