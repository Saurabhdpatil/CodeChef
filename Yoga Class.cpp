#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;                      
    cin >> T;
    while (T--){
      int n, x ,y;
      cin >>n>>x>>y;
      int value = n*x;
      
      int value1=0;
      if ( n % 2== 0){ //even 
        value1= (n/2) * y;
      }
      else {
        value1= ((n/2) *y) + ((n%2) *x);
      }
      cout <<max(value,value1)<<endl;
    }

    }
