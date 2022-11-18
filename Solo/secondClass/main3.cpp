#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;
    
    int A[] = {0,1,2,3,4,5,6,7};
    //no cambia el valor del vector
    //Crea una copia n
    for (auto elem: A) elem++;
    for (auto elem: A) cout<<elem<<" ";   
    //si cambia el valor del vector
    for (auto &elem: A) elem++;
    for (auto &elem: A) cout<<elem<<" ";
    
    return 0;
}