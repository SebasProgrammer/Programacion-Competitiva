#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;

ll v[101][101];

ll comb(int n, int k){
    if (k==0 || k==n) return 1;
    if (v[n][k]!=-1) return v[n][k];
    v[n][k] = comb(n-1,k-1) + comb(n-1,k);
    return v[n][k];
}

int main(){
    fast_io;
    memset(v,-1, sizeof(v));
    int n,m,c;
    
    while (cin>>n>>m){
        if (n==0 && m==0) break;
        cout<<n<< " things taken "<<m<<" at a time is "<<comb(n,m)<<" exactly."<<endl;
    }
    
    return 0;
}