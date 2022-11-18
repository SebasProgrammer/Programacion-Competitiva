#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    map<int, int> m;
    int s;
    while (tc--)
    {
        cin>>s;
        m[s]++;
    }
    auto it = m.begin();
    while (it != m.end()) {
        if (it->second ==1){
            cout<<it->first;
        }
        it++;
    }

    
    
    return 0;
}