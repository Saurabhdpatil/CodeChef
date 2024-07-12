#include <bits/stdc++.h>
using namespace std;

int main() {
   int x;
   cin>>x;
   int y[x];
   int even = 0, odd = 0;
   for(int i=0 ; i < x ; i++){
       cin>>y[i];
       if( y[i]%2 ==0)
           even++;
       else
           odd++;
   }
       if(even > odd)
           cout<<"READY FOR BATTLE"<<endl;
       else
           cout<<"NOT READY"<<endl;
           return 0;
}
   
