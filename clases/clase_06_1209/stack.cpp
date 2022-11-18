#include <bits/stdc++.h>
using namespace std;

int main() {
   stack<int> s;
   s.push(5); //inserta elemento al final en O(1)
   s.push(4);
   s.push(10);
   s.push(8);
   cout << s.top(); // último elemento en O(1)
   s.pop(); //elimina último elemento en O(1)
   s.pop();
   cout << "\n" << s.top();
}