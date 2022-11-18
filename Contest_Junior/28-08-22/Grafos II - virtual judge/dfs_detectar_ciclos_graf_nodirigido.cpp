#include <bits/stdc++.h>
#define MAXN 200
using namespace std;

vector<int> adj[MAXN];
bool vis[MAXN], ciclo = 0;

void dfs(int u, int pd) {
    vis[u] = 1; // empieza a procesarse
    for (int v : adj[u]) {
        if (!vis[v]) dfs(v, u);
        else if (v != pd) ciclo = 1;
    }
}

int main() {
    int n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0, -1);
    cout << ciclo;
}

