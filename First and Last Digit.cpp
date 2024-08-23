#include <bits/stdc++.h>
using namespace std;

int sumoffirstAndlast(int n){
    int lastdigit=n%10;
    int firstdigit=n;
    while(firstdigit>=10){
        firstdigit/=10;
    }
    return firstdigit+lastdigit;
}

int main() {
  int t,n;
  cin>>t;
  while(t--){
      cin>>n;
      cout<<sumoffirstAndlast(n)<<endl;
  }
}
