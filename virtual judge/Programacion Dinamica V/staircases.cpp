#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXT 500

int memo[MAXT+1][MAXT+1];

int f(int n, int s){
    if (n == 0){
        if (s == 0) return 1;
        return 0;
    }
    int &ret = memo[n][s];
    if (ret!=-1) return ret;
    ret = ;
    return ret;
}

int main(){
    fast_io;
    
    int n;
    cin>>n;
    cout<<f(n,n);    
    return 0;
}