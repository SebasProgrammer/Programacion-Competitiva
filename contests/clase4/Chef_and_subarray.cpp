#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a,best=0,cn=0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a;
        if (a!=0){
            cn+=1;
        }
        else
        {
            cn=0;
        }
        best= max(best,cn);
    }
    
    cout<<best;
    

    return 0;
}