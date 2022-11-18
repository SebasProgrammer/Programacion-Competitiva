#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    map<string, int> m;
    string s;
    while (tc--)
    {
        cin>>s;
        if (m.count(s)>=1){
            m[s]++;
            cout<<s<<m[s]<<'\n';
        }else
        {
            m.insert({s, 0});
            cout<<"OK"<<'\n';
        }  
    }
    return 0;
}