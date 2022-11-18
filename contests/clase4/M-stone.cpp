#include<bits/stdc++.h>
using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (k>0){
        if (k%2==0) k=2;
        else k=1;
    }
    while (k--){
        long long  mx = 0;
        for (size_t i = 0; i < n; i++)
        {
            mx = max(mx, v[i]);
        }
        for (size_t i = 0; i < n; i++)
        {
            v[i] = mx - v[i];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}