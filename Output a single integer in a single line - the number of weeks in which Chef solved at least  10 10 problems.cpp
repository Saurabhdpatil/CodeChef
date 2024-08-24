#include <bits/stdc++.h>
using namespace std;

int main(){
int array[4];
  for(int i=0;i<4;i++){
    cin>>array[i];
  }
  int count=0;
  for(int i=0;i<4;i++){
    if(array[i]>=10){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}

