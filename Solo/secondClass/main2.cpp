#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;
    
    auto n = 100;

    cout<<n;    
    //1 way to use pair
    pair<int,int> P;
    P.first =1; P.second =-1;
    //2 way to use pair
    pair<char, int> Q{'c', n} , R;
    cout<< Q.first<<Q.second;
    //3 way to use pair
    R = {'d',123};

    return 0;
}