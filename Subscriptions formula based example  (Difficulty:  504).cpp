#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int sub = (n + 5) / 6; //total subscription needed
        int cost = sub*x;       // total cost for each
        cout<<cost<<endl;
    }
    return 0;
    
}


