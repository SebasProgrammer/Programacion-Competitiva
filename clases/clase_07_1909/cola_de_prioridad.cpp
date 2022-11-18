#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> Q;
    Q.push(5); //insertar elemento en O(log n)
    Q.push(20);
    Q.push(4);
    Q.push(10);
    cout << Q.top() << "\n"; //devuelve el mayor elem en O(1)
    Q.pop(); //borra el mayor elem. en O(log n)
    cout << Q.top();
}