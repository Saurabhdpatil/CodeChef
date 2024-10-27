#include <bits/stdc++.h>
using namespace std;

void findTwoLargest(int x, int y, int z, int &largest, int &secondLargest) {
    if (x >= y && x >= z) {          // If x is the largest
        largest = x;
        secondLargest = (y > z) ? y : z;
    } else if (y >= x && y >= z) {   // If y is the largest
        largest = y;
        secondLargest = (x > z) ? x : z;
    } else {                         // Otherwise, z is the largest
        largest = z;
        secondLargest = (x > y) ? x : y;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        
    int a1, a2, a3, b1, b2, b3;
    // cout << "Enter first three numbers (Group 1): ";
    cin >> a1 >> a2 >> a3;
    // cout << "Enter second three numbers (Group 2): ";
    cin >> b1 >> b2 >> b3;

    // Variables to store the largest and second-largest numbers
    int max1, secondMax1, max2, scecondMax2;

    // Find the two largest numbers in each group
    findTwoLargest(a1, a2, a3, max1, secondMax1);
    findTwoLargest(b1, b2, b3, max2, secondMax2);

    // Sum of the two largest numbers in each group
    int sum1 = max1 + secondMax1;
    int sum2 = max2 + secondMax2;
    if(sum1 > sum2){
        cout<<"Aice"<<endl;
    }
    else if (sum2 > sum1){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
    
}
    }
