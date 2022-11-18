#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,q,k;

    cin>>n>>q;
    vi v;
    for (size_t i = 0; i < n; i++)
    {
        cin>>k;
        v.push_back(k);
    }

    for (size_t i = 0; i < q; i++)
    {
        cin>>k;
        auto it = upper_bound(v.begin(), v.end(), k);
        auto repeticiones  = upper_bound(v.begin(), v.end(), k)-lower_bound(v.begin(), v.end(), k);
        it--;
        if (it != v.end() && *it==k){ // && short circuts so *it == 4 wont be done unless it is valid
            cout << it-v.begin()<<'\n';
        }
        else{
            cout << -1<<'\n';
        }
    }
    
    

    return 0;
}