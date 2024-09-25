#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,x,y,z;
    cin >> T;  // Number of test cases
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Check if already an arithmetic progression
        if (Y - X == Z - Y) {
            cout << 0 << endl;  // No operation needed
        } 
        // Check if modifying Z to 2*Y - X makes it AP
        else if (z== 2*y-x){
            cout<<"1"<<endl;
        }
        else if(x== 2*y-z){
            cout<<"1"<<endl;
        }
        else if (y==(x+z)/2 ){
            cout<<"1"<<endl;
        }
        
    }
    
}
