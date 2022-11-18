#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;
    
    int A[] = {0,1,2,3,4,5,6};
    for (size_t i = 0; i < 7; ++i)
    {
        A[i]++;
    }

    for (size_t i = 0; i < 7; ++i)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}