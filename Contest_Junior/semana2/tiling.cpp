#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;

string memo[251];
string suma(string &a, string &b){
    string ret;
    int la = a.size(),lb = b.size();
    
    for(int i = 0,c = 0;i < la || i < lb || c > 0;++i){
        if(i < la) c += a[i] - '0';
        if(i < lb) c += b[i] - '0';
        ret += '0' + c % 10;
        c /= 10;
    }
    
    return ret;
}


int main(){
    fast_io;

    memo[0] = "1";
    memo[1] = "1";

    for (int i=2; i<=250; ++i){
        memo[i] = suma(memo[i-2], memo[i-2]);
        memo[i] = suma(memo[i], memo[i-1]);
    }
    int n;
    while (cin>>n)
    {
        if (n<0 || n>250) exit(0);
        reverse(memo[n].begin(),memo[n].end());
        cout<<memo[n]<<"\n";
    }
    
    return 0;
}