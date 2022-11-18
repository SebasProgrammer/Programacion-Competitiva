#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 200

int n,m;
vi g[MAXN + 1];
bool vis[MAXN + 1];
int color[MAXN+1];
bool ans =1;

void dfs(int u, int c){
    vis[u] = 1;
    color[u] = c;
    for (auto v: g[u])
    {
        if (!vis[v]){
            dfs(v, 1-c);
        } else{
            if (color[v] == c) ans =0;
        }
    }
    
}

int main(){
    fast_io;
    while (cin>>n)
    {
        if (n==0) break;
        //limpieza 
        for (int i = 0; i < n; i++)
        {
            g[i].clear();
            vis[i] = 0;
            color[i] = 0;
        }
        ans = 1;
        cin>>m;
        int u,v;
        for (int i = 0; i < m; i++)
        {
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0, 0);
        if (ans) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
    
    
    return 0;
}