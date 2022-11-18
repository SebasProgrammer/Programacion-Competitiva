#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 20

vi g[MAXN];
bool vis[MAXN];

void dfs(int u){
    vis[u] = 1;
    for(auto v: g[u]){
        if (!vis[v]) dfs(v);
    }
}

void solve(){
    char c;
    string s;
    cin>>c;
    cin.ignore();
    int n = c - 'A';

    //Limpiamos grafo pra la sieguiente entrada
    //de valores
    for(int i=0; i <n;i++){
        g[i].clear();
        vis[i] = 0;
    }

    while (getline(cin,s)) 
    {
        if (s == "") break;
        int u = s[0] - 'A', v = s[1] - 'A';
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int comp =0;
    for (int i = 0; i < n; i++){
        if (!vis[i]){
            comp++;
            dfs(i);
        }
    }
    cout<<comp<<'\n';

}

int main(){
    fast_io;
    
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        if (i > 0) cout<<"\n";
        solve();
    }
    
    
    
    return 0;
}