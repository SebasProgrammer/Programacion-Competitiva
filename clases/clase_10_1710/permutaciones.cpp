#include <bits/stdc++.h>
using namespace std;

int main() {
    char A [] = {'c', 'a', 'b'};
    int n = 3;
    sort(A, A + n);
    
    // O(n! * n)  .... n <= 11
    
    do {
        for (int i = 0; i < n; ++i) cout << " " << A[i];
        cout << "\n";
    } while(next_permutation(A, A + n));
}