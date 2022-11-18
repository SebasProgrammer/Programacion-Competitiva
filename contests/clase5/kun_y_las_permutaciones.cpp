#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    bool t = false;
    bool p = false;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if (v[i]!= i+1){
            t = true;
        }
    }

    sort(v.begin(),v.end());

    for (ll i = 0; i < n-1; i++)
    {
        if (v[i+1]-v[i] != 1){
            p =true;
            break;
        }
    }
    

    if (p ==false && v[n-1] == n){
        if (t){
            cout<<"permutacion desordenada";
        }
        else
        {
            cout<<"permutacion ordenada";
        }
    }
    else
    {
        cout<<"no permutacion";
    }
    

    
    
    

    return 0;
}