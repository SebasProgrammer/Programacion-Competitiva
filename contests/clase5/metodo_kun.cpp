#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    int ax,bx;
    cin>>a>>b;
    ax = abs(a);
    bx = abs(b);
    int mx= max(ax, bx);
    
    if (mx == ax){
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    


    return 0;
}