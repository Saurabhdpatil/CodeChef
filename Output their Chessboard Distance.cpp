#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x1,x2,y1,y2;
    cin>>t;
    while(t--){
        cin>>x1>>x2>>y1>>y2;
        int a = abs(x1-y1);
        int b = abs(x2-y2);
        int maxnum = max(a,b);
        cout<<maxnum<<endl;
    }
    return 0;
}
