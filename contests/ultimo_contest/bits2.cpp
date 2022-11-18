#include <bits/stdc++.h>
using namespace std;

int main() {
    int C[] = {10, 20, 30};
    int n = 3;
    
    // O(n * 2^n)
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; ++i) {
            if ((mask >> i) & 1) {
                cout << " " << C[i];
            }
        }
        cout << "\n";
    }
}
