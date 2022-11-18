#include <bits/stdc++.h>
//algorithm
#define MAXN 100000
using namespace std;

int A[MAXN + 1];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> A[i];
    sort (A, A + n); // O(n log n )
    int cnt = 0;
    for (int i = 0; i < n; ++i) { // O(n)
        bool ok = 1;
        if (i >= 1 && A[i] == A[i - 1]) ok = 0;
        if (i <= n - 2 && A[i] == A[i + 1]) ok = 0;
        if (ok) cnt++;
    }
    cout << cnt;
}

//complejidad O(n log n)