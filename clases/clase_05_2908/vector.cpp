#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
using namespace std;

int main() {
    vector<int> v(2, 5);
    for (auto e : v) cout << " " << e;
    cout << "\n";
    v.pb(15);
    v.pb(11);
    v.pb(10); // inserta al final O(1)
    cout << v.back() << "\n"; // obtiene ultimo elemento O(1)
    cout << v[v.size() - 1] << "\n";
    v.pob(); //borra ultimo elemento O(1)
    v.pob();
    for (int i = 0; i < v.size(); ++i) cout << " " << v[i];
    cout << "\n";
    vector<int> :: iterator it; //iterador q apunta a elementos de vector de enteros
    for (auto it2 = v.begin(); it2 != v.end(); it2++) {
        cout << " " << *it2;
    }
}