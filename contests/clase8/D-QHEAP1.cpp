#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> v;
    int nq, k;
    cin>>nq;
    int a,b;
    while (nq--)
    {
        cin>>k;
        if (k==1){
            cin>>a;
            v.insert(a);
        }else{
            if (k==2){
                cin>>a;
                v.erase(a);
            }
            else
            {
                cout<< *v.begin()<<'\n';
            }
        }
    }

    return 0;
}