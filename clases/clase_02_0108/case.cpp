#include <bits/stdc++.h>
using namespace std;

int main() {
    char c = 'b';
    char c1 = toupper(c); // tolower(c), isupper(c), islower(c)
    char c2 = 'b' - 32; // De 'A' a 'a'  --> +32
    cout << c1 << " " << c2 << "\n";
    if (c >= 'a' && c <= 'z') cout << "minuscula";
}