#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 100

char g[MAXN+1][MAXN+1];
bool vis[MAXN+1][MAXN+1];
int m, n;

int dx[] = {0, 0, 1, -1, -1,-1, 1, 1};
int dy[] = {1,-1, 0, 0,  -1, 1,-1, 1};

bool validate(int x, int y){
    if (x>=0 && x<=m && y>=0 && y<=n){
        return true;
    }
    return false;
}

void dfs(int x, int y){
    vis[x][y] =1;
    for (int i = 0; i < 8; i++)
    {
        int u = x + dx[i];
        int v = y + dy[i];
        if (!vis[u][v] && g[u][v]=='@' &&  validate(u,v)) dfs(u,v);
    }
}
    
int main(){
    fast_io;
    char v;
    while (cin >> m >> n)
    {
        int comp =0;
        if (m==0 && n==0) break;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++){
                cin >> g[i][j];
                //limpiar luego de un test case.
                vis[i][j] = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!vis[i][j] && g[i][j] == '@'){
                    comp++;
                    dfs(i,j);
                }
            }
        }
        cout<<comp<<'\n';
    }
    
    
    return 0;
}