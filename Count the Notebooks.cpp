#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int nb = (1000 * n) /100;  //no of notebooks can be made from n
        cout<<nb<<endl;
    }
    return 0;
}
