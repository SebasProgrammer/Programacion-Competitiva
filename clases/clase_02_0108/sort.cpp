#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int A[] = {3, 4, 1, 2, 7};
    sort(A, A + n); // ordena ascendente
    //sort(A, A + n, greater<int>());  //descendente
    reverse(A, A + n); // invierte el orden de los elementos
    for (int e : A) cout << " " << e;
}