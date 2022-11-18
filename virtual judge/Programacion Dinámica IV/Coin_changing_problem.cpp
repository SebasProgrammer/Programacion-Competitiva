#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 20
#define MAXS 50000    

vi v;
int memo[MAXN+1][MAXS+1];

int f(int n, int s){
    if (n==0){
        if (s==0) return 0;
        return 10000000;
    }
    int &ret = memo[n][s];
    if (ret != -1) return ret;
    ret = 0 + f(n-1, s);
    if (s>=v[n-1])
        ret = min(ret, 1 + f(n, s-v[n-1])); 
    return ret;
}

int main(){
    fast_io;
    memset(memo, -1, sizeof(memo));
    int n, m, k;
    cin>>n>>m;
    for (int i=0; i<m;++i){
        cin>>k;
        v.push_back(k);
    }

    cout<<f(m,n)<<'\n';
    return 0;
}