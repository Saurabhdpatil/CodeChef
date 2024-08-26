#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        int tot=a+b+c+d;
        if(tot>=1){
            cout<<"OUT"<<endl;
        }
        else{
            cout<<"IN"<<endl;
        }
    }
}
