#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    set<int> se;

    for (size_t i = 0; i < s.length(); i++)
    {
        se.insert(s[i]);
    }

    string ans = (se.size()==2) ? "Yes": "No";
    cout << ans<<'\n';

    return 0;
}