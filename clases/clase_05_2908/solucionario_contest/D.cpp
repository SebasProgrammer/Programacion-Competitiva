#include <bits/stdc++.h>
#define MAXN 100000
using namespace std;

int frec[MAXN + 1][10];
//frec[i][d]: cantidad de veces que aparece el dígito d en los números desde el 1
// hasta el i

int main() {
    // O(n  * d)
    for (int i = 1; i <= MAXN; ++i) {
        for (int j = 1; j <= 9; ++j) {
            int aux = i, cont = 0; // veces que aparece digito j en el número i
            while (aux > 0) {
                int d = aux % 10;
                if (d == j) cont++;
                aux = aux / 10;
            }
            if (i == 1) frec[i][j] = cont;
            else frec[i][j] = frec[i - 1][j] + cont;
        }
    }
    int q, n, d;
    cin >> q;
    while (q--) {  // O(q)
        cin >> n >> d;
        cout << frec[n][d] << "\n";
    }
    //complejidad: O(n * d + q)
}

