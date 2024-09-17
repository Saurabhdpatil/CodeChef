#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string dna;
        cin >> dna;

        string complement = "";
        for (char nucleotide : dna) {
            if (nucleotide == 'A') {
                complement += 'T';
            } else if (nucleotide == 'T') {
                complement += 'A';
            } else if (nucleotide == 'C') {
                complement += 'G';
            } else if (nucleotide == 'G') {
                complement += 'C';
            }
        }
        cout << complement << endl;  // Make sure to print a newline after each result
    }

    return 0;
}
