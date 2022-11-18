#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << (22 & 26) << "\n"; // and bitwise
    cout << (3 | 1) << "\n"; // or bitwise
    cout << (22 && 26) << "\n"; //lógico
    cout << (3 ^ 1) << "\n"; //xor
    cout << ~(7) << "\n";
    
    cout << (2 << 2) << "\n"; //left shift    2 * 2^2
    cout << (2 >> 1) << "\n"; //right shift   2 / (2^1)
    
    cout << (1LL << 33) << "\n";  // 2 ^ 5
    if (5 & 1) cout << "impar\n";
    cout << __builtin_popcount(5) << "\n"; // nro bits encendidos
    cout << __builtin_ctz(8) << "\n"; // nro ceros al final
    cout << __builtin_clz(8) << "\n"; // nro ceros al inicio
}