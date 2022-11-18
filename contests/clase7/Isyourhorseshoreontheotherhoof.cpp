#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<ll> st;
    ll k;
    ll n=4;
    for (ll i = 0; i < 4; i++)
    {
        cin >> k;
        st.insert(k);
    }

    cout<<n-st.size();
    
    return 0;
}