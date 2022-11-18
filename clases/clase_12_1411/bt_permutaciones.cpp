#include <bits/stdc++.h>
using namespace std;

int conf[10];
bool used[11];
int n;

void print_conf() {
  for(int i = 0; i < n; ++i) cout << " " << conf[i];
  cout << "\n";
}

void bt(int conf[], int pos) {
  if (pos == n){
    print_conf();
    return;
  }
  for (int op = 1; op <= n; ++op) {
    if (!used[op]) {
      used[op] = 1; // marcar
      conf[pos] = op;
      bt(conf, pos + 1);
      used[op] = 0; //desmarcar
    } 
  }
}

int main() {
  cin >> n;
  memset(used, 0, sizeof(used));
  bt(conf, 0);
}


