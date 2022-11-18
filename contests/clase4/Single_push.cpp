#include<bits/stdc++.h>
using namespace std;

int main() {

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>a(n), b(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int l = INT_MAX, r, k;
        set<int>se;
        vector<int>pos;
        bool f = false;
        int d;
        for (size_t i = 0; i < n; i++)
        {
            d = b[i] - a[i];
            if (d < 0 || se.size()>1) {
                f = true;
                break;
            }
            if (d != 0) {
                se.insert(abs(d));
                pos.push_back(i);
            }
        }
        int cnt = 0;
        if (pos.size() >= 2) {
            for (size_t i = 0; i < pos.size() - 1; i++)
            {
                if ((abs(pos[i] - pos[i + 1]) > 1) || abs(a[pos[i]] - b[pos[i]]) != abs(a[pos[i+1]] - b[pos[i+1]]) ) {
                    f = true;
                    break;
                }
            }
        }

        string ans;
        ans = (f == true) ? "NO" : "YES";
        cout << ans << "\n";
    }


    return 0;
}