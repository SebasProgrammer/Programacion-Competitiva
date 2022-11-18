#include <bits/stdc++.h>
using namespace std;

int A[] = {1, 4, 10, 10, 10, 101, 298};

int main() {
    int n = 5;
    bool ok = binary_search(A, A + n, 11); //busco en O(log n)
    // primer valor >= x en O(log n)
    cout << lower_bound(A, A + n, 10) - A << "\n";
    // primer valor > x en O(log n)
    cout << upper_bound(A, A + n, 10) - A << "\n";
    // cantidad de repeticiones de x en O(log n)
    cout << upper_bound(A, A + n, 10) - lower_bound(A, A + n, 10);
}