#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,s,k;
    cin>>n>>s;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        v.push_back(k);
    }
    
    
    // O(n! * n)  .... n <= 11
    int cn =0;
    do {
        for (int i = 0; i < n-1; ++i){
            if (v[i] + v[i+1] > s){
                cn+=1;
            }
        }
    } while(next_permutation(v.begin(), v.end()));

    cout<<cn;
    
    return 0;
}