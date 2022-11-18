#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;
    
    long long n, r=0;
    cin>>n;

    while (n>0)
    {
        n=n/2;
        r++;
    }
    
    cout<< r <<'\n';
    
    return 0;
}