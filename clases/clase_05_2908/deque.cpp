#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d(3, 2);
    for (auto e : d) cout << " " << e;
    d.push_front(5); //inserta al inicio en O(1)
    d.push_back(6); //inserta al final en O(1)
    cout << "\n";
    for (auto e : d) cout << " " << e;
    d.pop_back(); //borra último en O(1)
    d.pop_back();
    d.pop_front(); //borra el primero en O(1)
    cout << "\n";
    d.insert(d.begin() + 1, 5); // O(n)
    d.insert(d.begin() + 1, 7);
    for (auto e : d) cout << " " << e;
    cout << "\n";
    d.erase(d.begin() + 2); // O(n)
    for (auto e : d) cout << " " << e;
}