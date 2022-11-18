#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while (tc--)
    {
        double l, d, s, c, f;
        cin>>l>> d>> s >> c;
        f= s*pow(1+c,d-1);
        string ans;
        ans = (f<l) ? "DEAD AND ROTTING" : "ALIVE AND KICKING";
        cout <<ans<<'\n';
    }
    

    return 0;
}