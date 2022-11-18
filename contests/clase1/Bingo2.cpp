#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    int n, b, x;
    bool p;

    while(cin>>n>>b) {

        if (n==0 && b==0){
            exit(0);
        }
        
        vi marcadas(n+1,0);
        vi bolas(b);
        p = true;

        for (int i = 0; i < b; ++i)
            cin>>bolas[i];

        for (int i = 0; i < b; ++i)
            for (int j = 0; j < b; ++j)
                marcadas[abs(bolas[i] - bolas[j])] = 1;

        for (int i = 0; i < (n + 1); ++i)
            if(marcadas[i] == 0)
                p = false;

        printf(p ? "Y\n" : "N\n");
    }
    
    return 0;
}