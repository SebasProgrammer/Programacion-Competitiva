#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;
    m.insert({45434876, "Juan"}); // inserta O(log n)
    m.insert({45434876, "Ricardo"}); // omite este insert
    m[45434876] = "Ricardo"; //actualiza valor en O(log n)
    m[56765598] = "Ricardo"; //inserta en O(log n)si no existe 
                             //la clave
    for (auto e : m) {
        cout << e.first << " " << e.second << "\n";
    }
    cout << "******************\n";
    m.erase(45434876); // borra elemento en O(log n)
    for (auto e : m) {
        cout << e.first << " " << e.second << "\n";
    }
    if (m.count(56765598) > 0) cout << "esta";
    else cout << "No esta";
}