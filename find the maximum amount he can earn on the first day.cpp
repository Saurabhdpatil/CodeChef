#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x*10>=y){
            cout<<y*z<<endl;
        }
        else{
            cout<<10*x*z<<endl;
        }
    }
    return 0;
}
