#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    map<string, int> M;  // {juan:20, pedro:18, luis:50}
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (M.count(s) == 0) {
            cout << "OK";
            M[s] = 1;
        } else {
            cout << s << M.size();
            M[s]++;
        }
        cout << "\n";
    }
}