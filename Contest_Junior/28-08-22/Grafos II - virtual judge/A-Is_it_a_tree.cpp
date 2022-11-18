#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 10001
#define MAXM 20001

vi g[MAXN];
bool vis[MAXN];
int n,m;

void dfs(int u){
    vis[u] = 1;
    for (auto v: g[u])
    {
        if (!vis[v]){
            dfs(v);
        }
    }
    
}

int main(){
    fast_io;
    
    int u,v;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        cin>>u>>v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int comp =0;
    for (int i=0; i<n;i++){
        if (!vis[i]){
            comp++;
            dfs(i);
        }
    }
    //Importante: No olvidar que un arbol 
    //el numero de aristas(m) = numero de nodos-1
    // sin esto no sale el problema
    if (comp==1 && m==n-1) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}