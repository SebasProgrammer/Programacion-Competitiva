#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 200001

vi g[MAXN];
long long n, m;
bool vis[MAXN];

void dfs(long long u){
    vis[u] =1;
    for (auto v: g[u]){
        if (!vis[v]){
            dfs(v);
        }
    }
}

int main(){
    fast_io;
    long long x,y;
    cin>>n>>m;
    for (long long i = 0; i < m; i++)
    {
        cin>>x>>y;
        if(x==y) continue;
        x--,y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    dfs(0);
    if (vis[0]==1 && vis[n-1]==1){
        cout<<"Si";
    }else cout<<"No";
    
    
    return 0;
}