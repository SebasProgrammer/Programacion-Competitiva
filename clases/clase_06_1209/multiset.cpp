#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(5); // O(log n)
    ms.insert(2);
    ms.insert(5);
    ms.insert(2);
    cout << ms.count(5) << "\n"; // O(log n + frecuencia)
    if (ms.find(2) == ms.end()) { // O(log n)
        cout << "no esta\n";
    } else {
        cout << "si esta\n";
    }
    // ms.erase(5); borraría todos los 5 en O(log n + frecuencia)
    auto it = ms.find(5); // O(log n)
    if (it != ms.end()) ms.erase(it); // O(1)
    for (int e : ms) cout << " " << e;
    cout << "\n";
    // O(log n )
    cout << *(ms.upper_bound(2)) << "\n"; //primer elemento > 2
    cout << *(ms.lower_bound(2)); // primero elemento >= 2
}