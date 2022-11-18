#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(5); //inserta en O(log n)
    s.insert(1);
    s.insert(3);
    cout << *(s.begin()) << " "; // menor elemento en O(1)
    auto it = s.end();
    it--;
    cout << *it << "\n"; //mayor elemento en O(1)
    s.erase(3); //borra elemento en O(log n)
    auto it2 = s.begin();
    it2++;
    s.erase(it); //O(1)
    for (int e : s) cout << " " << e;
    s.insert(4);
    cout << "\n" << s.count(2) << "\n"; // cuenta las aparicione O(log n)
    if (s.find(4) == s.end()) { // O(log n)
        cout << "no esta elemento";
    } else {
        cout << "si esta";
    }
}