#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm;
    mm.insert({123, "Carlos"}); //inserta en O(log n)
    mm.insert({123, "Pedro"});
    //mm.erase(123); borraría todos los 123 en O(log n + frec)
    auto it = mm.find(123); //O(log n)
    mm.erase(it); //O(1)
    for (auto e : mm) {
        cout << e.first << " " << e.second << "\n";
    }
    cout << "\n";
    auto it2 = mm.find(123);
    it2 -> second = "Luis";
    for (auto e : mm) {
        cout << e.first << " " << e.second << "\n";
    }
}