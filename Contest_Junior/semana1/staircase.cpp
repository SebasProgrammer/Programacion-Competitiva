#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;
    
    int n;
    cin>>n;

    for (int i=1; i<=n; ++i){
        for (int j=i; j<n; ++j){
            cout<<" ";
        }
        for (int k=0;k<i;++k){
            cout<<"#";
        }
        cout<<"\n";
    }    
    
    return 0;
}