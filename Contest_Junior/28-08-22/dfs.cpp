#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 20
    
vector<int> g[MAXN];
bool vis[MAXN];
//Como el grafo es no dirigido entonces,
// se repite un camino ya recorrido,
// por lo cual O(V+2E) -> es igual -> O(V+E).

void dfs(int u){
    vis[u] =1;
    for (auto v: g[u]){
        if (vis[v] != 1){
            dfs(v);
        }
    }
}
    
int main(){
    fast_io;
    
    int n, m, u, v;
    cin>> n >> m;
    for (int i=0; i < m;i++){
        cin>>u>>v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    //Elegir vértice de inicio
    dfs(0);
    //verficar que todos los vertices fueron vistados
    for(int i=0; i<n;i++){cout<<vis[i];}
    
    return 0;
}

//OJO: Cuando un grafo no es conexo, es decir,
//No existe un camino q llegue a todos los vértices,
//Entonces, tenemos pequeñas islas llamadas 
//componentes conexas.
