#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;

int fibonacci(int n){

    if (n==0) return 0;
    if (n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
    
int main(){
    fast_io;

    int n;
    cin>>n;
    if (n<0 || n>30) exit(0);

    cout<<fibonacci(n);

    
    return 0;
}