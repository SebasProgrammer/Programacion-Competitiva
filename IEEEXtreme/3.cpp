#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 101

vi v = { 1,2,3,4,5,6 };
int memo[MAXN][MAXN];
int cnt=0;

int f(int n, int k, int s) {
    if (n == 0) {
        if (s==0) { 
            return 1;
        }
        return 0;
    }
    int& ret = memo[n][s];
    if (ret != -1) { return ret; }
    ret = f(n-1, k, s);
    if (s>=v[n-1])
        ret = ret +  f(n,k-1, s-v[n-1]);
    return ret;
}

int main() {
    fast_io;
    memset(memo, -1, sizeof(memo));
    int n = 6;
    int s = 7;
    int k=2;
    cout << f(n, k, s);


    return 0;
}