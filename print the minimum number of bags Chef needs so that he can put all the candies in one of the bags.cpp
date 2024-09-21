#include <iostream> 
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while(t--)
    {
        int n, k, m, a;
        cin >> n >> k >> m; // Input: n = total candies, k = pockets per bag, m = candies per pocket
        a = k * m; // Total candies a single bag can hold
        if (n % a == 0)
        {
            cout << n / a << endl; // If n is exactly divisible by a, output the exact number of bags
        }
        else
        {
            cout << (n / a) + 1 << endl; // Otherwise, output the number of bags plus one (for the remainder)
        }
    }
    return 0;
}
