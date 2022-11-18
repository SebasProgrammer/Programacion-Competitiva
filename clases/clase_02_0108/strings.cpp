#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1; //lee cada hasta un ' ' o '\n'
    cin.ignore(); //ignora un caracter en la lectura
    getline(cin, s2); //lee toda un línea (inclusive el '\n')
    cout << s1 << " " << s2;
}