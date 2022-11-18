#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; 
    cin >> s;
    string aux = "";

    for (int i = 0; i < s.size(); i++) {
        if (aux.empty() ||  s[i] != aux[aux.size()-1]) {
            aux += s[i];
        }
        else
        {
            aux.pop_back();
        }
    }

    cout << aux;

    return 0;
}