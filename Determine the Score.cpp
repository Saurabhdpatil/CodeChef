#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,n;
    cin>>t;
    while(t--){
        cin>>x>>n;
        int score =x/10 * n;
        cout<<score<<endl;
    }
    return 0;
}
