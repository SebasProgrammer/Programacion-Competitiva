#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    int mn=INT_MAX, mx=0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
        mn = min(mn,v[i]);
        mx = max(mx, v[i]);
    }

    if (q==0){cout<<"No"<<'\n'; exit(0);}
    while (q--)
    {
        int k;
        cin>>k;
        if (k>=mn && k<=mx){
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"No"<<'\n';
        }
    }
    return 0;
}