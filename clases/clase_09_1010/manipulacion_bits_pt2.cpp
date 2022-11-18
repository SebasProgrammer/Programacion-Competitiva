#include <bits/stdc++.h>
using namespace std;

int main() {
    int C[] = {13, 16, 10};
    int n = 3;
    int mask = 6;
    // testear bits
    for (int i = 0; i < n; ++i) {
        if ((mask >> i) & 1) cout << " " << C[i];
    }
    int mask2 = 2;
    //encender el bit 2
    mask2 = mask2 | (1 << 2);
    cout << "\n" << mask2;
    
    int mask3 = 6;  //110   
    //apagar el bit 1
    mask3 = (mask3 & ~(1 << 1));
    cout << "\n" << mask3;
    
    int mask4 = 7;
    //invertir el bit 1
    mask4 = (mask4 ^ (1 << 1));
    cout << "\n" << mask4;
}
