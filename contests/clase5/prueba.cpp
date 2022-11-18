#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n=9;
    int q=3;
    while (q--)
    {
        char d;
        cin>>d;
        string s;
        for (size_t i = 0; i < n; i++)
        {
            s+= to_string(i);
        }
        int c;
        c =  count(s.begin(), s.begin() + n, d);
        cout << c << '\n';
        }

    return 0;
}