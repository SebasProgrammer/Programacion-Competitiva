#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m,a;

    long long x, y;

    while (cin>>n>>m>>a)
    {
        if (n%a!=0){
            x = (n/a) + 1;
        }

        else
        {
            x = (n/a);
        }
    

        if (m%a!=0){
            y = (m/a) + 1;
        
        }

        else
        {
            y = (m/a);
        }
    

        cout<<x*y<<'\n';
    }
    

    return 0;
}