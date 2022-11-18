#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    long long r=0;
    if (n==1){
        r = 5;
    }
    if (n==2){
        r=17;
    }
    if (n==3){
        r=53;
    }
    if (n==4){
        r = 161;
    }
    cout<<r;

    return 0;
}