#include <bits/stdc++.h>
using namespace std;

int main() {
    int A1,A2,B1,B2,C1,C2;
    cin>>A1>>A2>>B1>>B2>>C1>>C2;
    int a= max(A1,A2);
    int b= max(B1,B2);
    int c= max(C1,C2);
    int tot=a+b+c;
    cout<<tot<<endl;
}
