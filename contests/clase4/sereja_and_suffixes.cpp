#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    while (m--)
    {
        int k;
        cin>>k;
        set<int>se;
        vector<int> v2(n);
        for (size_t i = v.size()-1; i >=0; i--)
        {
            se.insert(v[i]);
            v2[i] = se.size();
        }
        cout<<v2[k-1]<<'\n';
    }
    
    
    

    return 0;
}