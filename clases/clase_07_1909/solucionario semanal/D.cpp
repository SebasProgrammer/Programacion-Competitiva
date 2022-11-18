#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int n, x;
    map<int, int> M;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        M[x]++;
    }
    int cont = 0;
    for (auto p : M) {
        int x = p.first;
        int f = p.second;
        if (f >= x) cont += (f - x);
        else cont += f;
    }
    cout << cont;
}