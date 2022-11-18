#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    long long b=1;
    long long r=0;
    long long cn=1;
    for (int i=1; i<=n; i++){
        if (i==1){
            b = cn*5 + 2*r;
            r+=1;
            cn*=3;
        }
        else
        {
            b= cn*5+2*(r);
            r += cn;
            cn*=3;
        }
    }
    cout<<b;
    
    return 0;
}