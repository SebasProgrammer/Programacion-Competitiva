#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> cn(n,1);
    sort(v.begin(), v.end());

    // 6 12 12 15 20 20 20
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1]) {
            cn[i] += 1;
        }
    }

    set<ll> se;
    if (cn[0] == 1) {
        se.insert(v[0]);
    }
    for (ll i = 0; i < n-1; i++)
    {
        if (cn[i+1] == 1 && v[i]!=v[i+1]) {
            se.insert(v[i+1]);
        }
    }

    cout << se.size();


    return 0;
}