#include <iostream>
using namespace std;

int main() {
    int n,x,y,z;
    cin>>n;
    int p=0;
    while(n--){
        cin>>x>>y>>z;
        int sum=x+y+z;
        if (sum >= 2){
            p=p+1;
        }
    }
    cout<<p<<endl;
    return 0;
}
  
