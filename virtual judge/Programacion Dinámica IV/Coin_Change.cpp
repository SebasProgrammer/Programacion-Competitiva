#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXS 7489
#define MAXN 5

int A[] = {1,5,10,25,50};
int memo[MAXN+1][MAXS+1];

int f(int n, int s){
    if (n == 0) {
        if (s==0) return 1;
        return 0;
    }
    int &ret = memo[n][s];
    if (ret!=-1) return ret;
    ret = f(n-1,s);
    if (s>=A[n-1])
        ret = ret +  f(n,s-A[n-1]);
    return ret;
}

int main(){
    fast_io;
    int n = 5, s;
    memset(memo, -1, sizeof(memo));
    while (cin>>s)
    {
        cout<<f(n,s)<<'\n';
    }
    return 0;
}