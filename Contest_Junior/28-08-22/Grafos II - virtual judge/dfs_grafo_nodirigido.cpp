#include <bits/stdc++.h>
#define MAXN 200
using namespace std;

vector<int> adj[MAXN];
int col[MAXN];

// nodo color 0 : no visitado
// nodo color 1 : visitado, explorando vecinos
// nodo color 2 : visitado y terminó de explorar vecinos

//En grafo no diridigo solo hay tree edge y back edge
// tree edge (u, v) tal que color[v] = 0
// back edge (u, v) tal que color[v] = 1

void dfs(int u, int pd) {
    col[u] = 1; // empieza a procesarse
    for (int v : adj[u]) {
        if (col[v] == 0) {
            cout << "tree edge: " << u + 1 << ", " << v + 1 << "\n";
            dfs(v, u);
        }
        if (v != pd && col[v] == 1) {
            cout << "back edge: " << u + 1 << ", " << v + 1 << "\n";
        }
    }
    col[u] = 2; //terminó de procesarse
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
    memset(col, 0, sizeof(col)); // marco los nodos con color 0
    dfs(0, -1);
}
