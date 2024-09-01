#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if((x>y+z)||(y>x+z)||(z>y+x)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
