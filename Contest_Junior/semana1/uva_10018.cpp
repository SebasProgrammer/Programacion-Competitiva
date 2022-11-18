#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;

    int n;
    cin>>n;
    
    while (n--)
    {
        ll nu, na,resto;
        vi v;
        cin>>nu;
        na = nu;
        while (nu!=0)
        {
            resto = nu/10;
            nu = nu%10;
            v.push_back(resto);
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        
        

    }
        
    
    return 0;
}