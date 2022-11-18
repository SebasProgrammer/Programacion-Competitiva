#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXS 10000
#define MAXN 21

vi A;
ll memo[MAXN+1][MAXS+1];

ll f(int n, int s){
    if (n == 0) {
        if (s==0) return 1;
        return 0;
    }
    ll &ret = memo[n][s];
    if (ret!=-1) return ret;
    ret = f(n-1,s);
    if (s>=A[n-1])
        ret = ret +  f(n,s-A[n-1]);
    return ret;
}

int main(){
    fast_io;
    int s;
    memset(memo, -1, sizeof(memo));
    for (int i = 1; i <= 21; ++i)
    {
        A.push_back(i*i*i);
    }
    while (cin>>s)
    {   
        cout<<f(21,s)<<endl;
    }
    return 0;
}