#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int tot=(y*2);  //one person requires bucket of water to take bath.
        int max=x/tot;   //maximum number of people that can take bath.
        cout<<max<<endl;
    }

}
