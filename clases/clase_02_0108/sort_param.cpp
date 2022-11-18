// -1 4 -3 6 5 -2  -> -1 -2 -3 4 5 6
#include <bits/stdc++.h>
using namespace std;

// ¿x < y?
bool comp(int x, int y) {
    if (abs(x) < abs(y)) return 1;
    return 0;
}

int main() {
    int n = 6;
    int A[] = {-1, 4, -3, 6, 5, -2};
    sort(A, A + n, comp);
    for (int e : A) cout << " " << e;
}

