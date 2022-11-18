#include <bits/stdc++.h>
using namespace std;

int A[] = {2, 5, 1, 10, 3};

int main() {
    for (auto &elem : A) elem++; 
    for (int e : A) cout << " " << e;
    return 0;
}