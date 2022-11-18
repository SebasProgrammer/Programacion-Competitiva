#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, k;
    cin>>t;

    int total = 0;
    for (int i=0; i<t; i++){
        cin>>k;
        for (int j=1; j<k+1; j++){
            bitset<11> bs(j);
            //cout<<bs<<endl;
            total += bs.count();
        }

    }

    cout<<total<<endl;

    return 0;
}