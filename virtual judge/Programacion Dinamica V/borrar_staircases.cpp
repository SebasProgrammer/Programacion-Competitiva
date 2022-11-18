#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 500

int memo[MAXN+1][MAXN+1];
//n: numero de ladrillos disponibles
//last: ultima cantidad de ladrillos que puse
int f(int n, int last){
    if (n==0) return 1;
    int &ret = memo[n][last];
    if (ret!=-1) return ret;
    ret = 0;
    for (int i = last + 1; i <= n; i++)
    {
        ret = ret + f(n-i,i);
    }
    return ret;
    
}
    
int main(){
    fast_io;
    memset(memo,-1,sizeof(memo));
    int n;
    cin>>n;
    cout<<f(n,0)<<"\n";
    
    return 0;
}