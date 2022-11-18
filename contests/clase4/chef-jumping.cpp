#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, cn=0, r=0;
    cin>>n;
    string ans;
    ans = (n%3==0 || n%6==1) ? "yes": "no";
    cout<<ans<<'\n';

    return 0;
}