#include <bits/stdc++.h>
using namespace std;

int conf[10];
int n, m;

void print_conf() {
  for(int i = 0; i < n; ++i) cout << " " << conf[i];
  cout << "\n";
}

void bt(int conf[], int pos) {
  if (pos == n){
    print_conf();
    return;
  }
  for (int op = 1; op <= m; ++op) {
    conf[pos] = op;
    bt(conf, pos + 1);
  }
}

int main() {
  cin >> n >> m;
  bt(conf, 0);
}