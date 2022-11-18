#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXN 101


vi v;
int memo[MAXN][MAXN];

int f(int n, int s){
    if (n==0){
        if (s==0){ return 1;}
        return 0;
    }
    int &ret = memo[n][s];
    if (ret != -1){return ret;}
    ret = 0;
    if (s >= v[n-1])
        ret = f(n-1, s-v[n-1]);
    ret = ret || f(n-1,s);
    return ret;
}

int main(){
    fast_io;
    int m;
    cin>>m;
    cin.ignore();
    while (m--) 
    {
        string s;
        v.clear();
        getline(cin, s);
        stringstream in(s);
        int num, suma=0;
        while (in >> num){
            v.push_back(num);
            suma+= num;
        }
        bool b= true;
        memset(memo, -1, sizeof(memo));
        if (suma %2 == 1){ b = false;}
        else{
            b = f(v.size(), suma/2);
        }
        if (b) cout<<"YES\n";
        else {cout<<"NO\n";}

    }
    
    
    return 0;
}