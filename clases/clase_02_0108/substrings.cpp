#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "telegrama";
    string aux = "";
    aux += s[0];
    aux += s[1];
    aux += s[2];
    aux += s[3];
    string sub = s.substr(0, 4); // devuelve subcadena de inicio = 0 y longitud = 4
    cout << aux << " " << sub << " " << s.substr(4);
}