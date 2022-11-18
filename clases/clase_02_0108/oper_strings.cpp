#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "hola", s2 = "mundo";
    string s = s1 + " " + s2;
    s = s + " 2021";
    s += "-2";
    s = s + '!';
    cout << s << "\n";
    string s3;
    s3 = (string)"Peru" + '!';
    for (int i = 0; i < s3.size(); ++i) cout << " " << s3[i];
    cout << "\n";
    for (char e : s3) cout << " " << e;
    return 0;
}