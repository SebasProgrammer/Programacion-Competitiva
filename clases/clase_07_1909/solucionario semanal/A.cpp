#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    set<int> s;
    for (int i = 0; i < 4; ++i) {
        cin >> c;
        s.insert(c); // O(log n)
    }
    int sz = s.size();
    cout << 4 - sz;
}