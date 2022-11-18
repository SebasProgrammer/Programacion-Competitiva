#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int series(ll n){
    long double t=0;
    if (n>0){
        t = (double)pow(n,2) - pow(n-1,2);
        cout<<t;
        t = ceil(t);
        return t;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        cout<< series(n)<<'\n';
    }
    
    return 0;
}