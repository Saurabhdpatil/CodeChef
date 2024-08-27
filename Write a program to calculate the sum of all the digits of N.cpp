#include <bits/stdc++.h>
using namespace std;


int main() {
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       int sum_of_digit=0;
       // Calculate the sum of digits
       while(n>0){
           sum_of_digit+=n%10;   // Calculate the sum of digits
           n=n/10;   // Remove the last digit from N
       }
       // Print the result for this test case
       cout<<sum_of_digit<<endl;
   }
    return 0;
}
