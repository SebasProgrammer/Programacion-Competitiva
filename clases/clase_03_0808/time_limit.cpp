#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n; // <= 10^10
    cin >> n;
    ll cont = 0;
    for (ll i = 1; i <= n; ++i) {
        if (i % 5 == 0) cont++;
    }
    cout << cont;
}