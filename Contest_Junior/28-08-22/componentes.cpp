#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 20
    
vector<int> g[MAXN];
bool vis[MAXN];
int cc[MAXN];

void dfs(int u, int comp){
    vis[u] =1;
    cc[u] = comp;
    for (auto v: g[u]){
        if (vis[v] != 1){
            dfs(v, comp);
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
    //para contar las componentes
    int comp =0;
    for (int i=0; i<n;i++){
        if (!vis[i]){
            comp++;
            dfs(i, comp);
        }
    }
    //numero de componentes
    cout<<"Nro de componente: "<<comp<<'\n';
    //revisar si todos los vertices fueron visitados
    for(int i=0; i<n;i++){cout<<vis[i];}
    //revisar la componente de cada vertice
    for (int i = 0; i < n; i++) cout<<i<<" -> "<<cc[i]<<'\n';
    {
        /* code */
    }
    
    return 0;
}

//OJO: Cuando un grafo no es conexo, es decir,
//No existe un camino q llegue a todos los vértices,
//Entonces, tenemos pequeñas islas llamadas 
//componentes conexas.
