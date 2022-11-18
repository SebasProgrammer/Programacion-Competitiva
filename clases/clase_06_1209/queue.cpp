#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q, aux;
    q.push(4); //inserta al final en O(1)
    q.push(5);
    q.push(1);
    cout << q.front(); //devuelve elemento del inicio en O(1)
    q.pop(); //borra elemento del inicio en O(1);
    cout << "\n " << q.front() << endl;
    q.push(3);
    aux = q;
    while (aux.size() > 0) {
        cout << " " << aux.front();
        aux.pop();
    }
}