#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int q, tipo, x;
    stack<int> s, smax;
    cin >> q;
    while (q--) {
        cin >> tipo;
        if (tipo == 1) {
            cin >> x;
            s.push(x);
            int maxi = 0;
            if (smax.size() > 0) maxi = smax.top();
            smax.push(max(x, maxi));
        } else if (tipo == 2) {
            s.pop();
            smax.pop();
        } else {
            cout << smax.top() << "\n";
        }
    }
}