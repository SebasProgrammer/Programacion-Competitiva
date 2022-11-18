#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 20
    
vector<int> g[MAXN];

int main(){
    fast_io;
    int n, m, u, v;
    cin>> n >> m;
    for (int i=0; i < m;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int u=1; u <=n; u++){
        cout<<u<<"-> ";
        for (auto v: g[u]){
            cout<<v<<' ';
        }
        cout<<'\n';
    }


    
    return 0;
}