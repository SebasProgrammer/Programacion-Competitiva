#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    multiset<ll> mult;
    ll n, k;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> k;
        mult.insert(k);
    }

    ll r, cont = 0;
    auto it = mult.begin();
    
    while (mult.empty()!=true)
    {   
        if (*it != mult.count(*it)) {
            cont += 1;
            mult.erase(it);
        }
        else
        {
            mult.erase(*it);
        }
        it = mult.begin();
    }

    cout << cont;



    return 0;
}