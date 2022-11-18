#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    map<int, int> mx, my;
    cin >> n;
    for (int i = 0; i < 4 * n -1; ++i) {
        cin >> x >> y;
        mx[x]++;
        my[y]++;
    }
    for (auto p : mx) {
        if (p.second % 2 == 1) {
            cout << p.first;
            break;
        }
    }
    for (auto p : my) {
        if (p.second % 2 == 1) {
            cout << " "<< p.first;
            break;
        }
    }
    cout << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
}