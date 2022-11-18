#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

// (a * b * c + d) % mod = ((( ((a % mod) * (b % mod)) % mod ) * c ) % mod + (d % mod) ) % mod

int main() {
    int n; // <= 10^6
    cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans = ((ans * 3) % mod + 2) % mod;
    }
    cout << ans;
    return 0;
}