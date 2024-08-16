#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int tot1= x*100;   //Disposable Masks — cost x
	    int tot2= y*10;    //Cloth Masks — cost y 
	    if(tot1>tot2){
	        cout<<"Cloth"<<endl;
	    }
	    else if(tot1==tot2){
	        cout<<"Cloth"<<endl;
	    }
	    else{
	        cout<<"Disposable"<<endl;
	    }
	}
	return 0;

}
