#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 200
#define MAXM 10
#define MAXD 20

vi v;
int memo[MAXN+1][MAXM+1];

int f(int n, int s){
    if (n==0){
        if (s==0) return 1;
        return 0;
    }
    int &ret = memo[n][s];
    if (ret != -1) return ret;
    ret =f(n-1,s);
    if (s>=v[n-1]) {
        ret = ret + f(n-1, s-v[n-1]);
    }
    return ret;
}

void solve(int n){
    int d,m,suma=0;
    cin>>d>>m;
    cout<< f(n, suma);
}
    
int main(){
    fast_io;
    
    int n, q, k;
    while (cin>>n>>q)
    {
        memset(memo, -1, sizeof(memo));
        v.clear();
        if (n==0 && q==0) break;
        for(int i=0; i<n; i++){
            cin>>k;
            v.push_back(k);
        }
        for (int i = 0; i < q; i++)
        {
            solve(n);
        }
        
    }
    
    return 0;
}