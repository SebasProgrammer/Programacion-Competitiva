#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while (tc--)
    {
        int n, k, e, sum=0;
        cin>>n>>k;
        vector<int> v;
        for (int i=0; i<n;i++){
            cin>>e;
            sum+=e;
            v.push_back(e);
        }

        for (int i=0; i<n;i++){
            if (v[i]>k){
                v[i] = k;
            }
            sum-=v[i];
        }

        cout<<sum<<'\n';
    }

    
    
    return 0;
}