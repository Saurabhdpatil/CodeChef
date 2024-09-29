#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int floorChef = (x - 1) / 10 + 1;
        int floorChefina = (y - 1) / 10 + 1;
        int floorsToTravel = abs(floorChef - floorChefina);
        cout<<floorsToTravel<<endl;
	}

}
