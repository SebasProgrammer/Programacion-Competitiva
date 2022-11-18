#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l, r, x;
    int C[15];
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; ++i) cin >> C[i];
    
    int ans = 0;
    for (int mask = 0; mask < (1 << n); ++mask) {
        int sum = 0, cont = 0, mini = 10000000, maxi = 0;
        for (int i = 0; i < n; ++i) {
            if ((mask >> i) & 1 ) {
                sum += C[i];
                cont++;
                mini = min(mini, C[i]);
                maxi = max(maxi, C[i]);
            }
        }
        if (sum >= l && sum <= r && cont >= 2 && maxi - mini >= x) {
            ans++;
        }
    }
    cout << ans;
}