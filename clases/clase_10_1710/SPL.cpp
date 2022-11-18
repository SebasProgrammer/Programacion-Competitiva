#include <bits/stdc++.h>
using namespace std;

int main() {
    char A [] = {'c', 'a', 'b'};
    int n = 3;
    if (next_permutation(A, A + n)) { //hay SPL
        for (int i = 0; i < n; ++i) cout << " " << A[i];
    } else {
        cout << "no existe SPL";
    }
}