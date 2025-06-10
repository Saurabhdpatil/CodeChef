#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,y,tot;
	cin>>tot;
	while(tot--){
	    cin>>a>>b>>x>>y;
	    int unit = a * b;
	    int cab = x * y;
	    if(cab >= unit){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;

}



-----------------------------------------------------------efficent solution

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        int required_power = A * B;
        int available_power = X * Y;
        cout << (available_power >= required_power ? "Yes" : "No") << endl;
    }
    return 0;
}
