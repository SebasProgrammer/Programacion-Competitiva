#include <bits/stdc++.h>
using namespace std;

char M[1 << 4][ 1 << 5];

void dibuja(int n, int x, int y) {
  if (n == 1) {
    M[x][y] = M[x - 1][y + 1]= '/';
    M[x][y + 1] = M[x][y + 2] = '_';
    M[x][y + 3] = M[x - 1][y + 2] = '\\';
    return;
  }
  dibuja(n - 1, x, y);
  dibuja(n - 1, x - (1 << (n-1)), y + (1 << (n - 1)));
  dibuja(n - 1, x, y + (1 << n));
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < (1 << n); ++i) {
    for (int j = 0; j < (1 << (n + 1)); ++j) {
      M[i][j] = ' ';
    }
  }
  dibuja(n, (1 << n) - 1, 0 );
  for (int i = 0; i < (1 << n); ++i) {
    for (int j = 0; j < (1 << (n + 1)); j++) {
      cout << M[i][j];
    }
    cout << "\n";
  }
}