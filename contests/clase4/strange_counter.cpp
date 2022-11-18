#include<bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin >> n;
    long long cn=1, ans=3, resta=3;
    while (cn<=n)
    {
        cn+=ans;
        ans*=2;
    }
    

    cout<<cn-n;

    return 0;
}