#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    while (cin>>n)
    {
        vector<int> v;

        int e, cnt=0;

        for (int i=0;i<n;i++){
            cin>>e;
            v.push_back(e);
        }

        cnt=n;

        for (int i = n-1; i>0; i--){
            if (v[i-1] > v[i] && v[i]<v[0]){
                cnt-=1;
            }
        }

        cout<<cnt<<'\n';
    }
    

    return 0;
}