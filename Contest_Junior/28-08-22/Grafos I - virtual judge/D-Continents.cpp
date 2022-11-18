#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 21

char g[MAXN][MAXN];
bool vis[MAXN][MAXN];
char value;
int n,m,sum,mx=0;
int dx[] = {0,  0, -1, 1};
int dy[] = {1, -1,  0, 0};

void dfs(int x, int y){
    sum++;
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int u = x + dx[i];
        int v = y + dy[i];
        if (v<0) v=m-1;
        else if (v>=m) v=0;
        if(u>=0 && u<n && v>=0 && v<m && g[u][v]== value){
            if (!vis[u][v]){
                dfs(u,v);
            }
        }
    }
    
}

int main(){
    while (cin>>n>>m)
    {
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>g[i][j];
                vis[i][j] = 0;
            }
            
        }
        int a,b;
        cin >>a >> b;
        sum=0;
        value = g[a][b];
        dfs(a,b);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && g[i][j] == value){
                    sum=0;
                    dfs(i,j);
                    if (sum>mx) mx=sum;
                }
            }
        }
        cout<< mx <<endl;
        mx =0;
    }
    return 0;
}