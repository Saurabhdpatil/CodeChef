#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    
    int cuboidVolume = a * b * c; // Volume of the cuboid
    int cubeVolume = x * x * x;   // Volume of the cube (X^3)
    
    if (cuboidVolume > cubeVolume) {
        cout << "Cuboid" << endl;
    } else if (cubeVolume > cuboidVolume) {
        cout << "Cube" << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}
