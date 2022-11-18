#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;

vi v;
//k : la posicion del numero mas alto de x;
    
int main(){
    fast_io;
    
    int q, id, va,k;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>id>>va;
        if (id==1) v.push_back(va);
        if (id==3) {
            cin>>k;
            vi v2;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i]>= va) v2.push_back(v[i]);
            }
            if (v2.size()>=k){
                cout<<v2[k-1]<<"\n";
            }else cout<<-1<<"\n";
            v2.clear();
        }
        if (id==2) {
            cin>>k;
            vi v3;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i]<= va) v3.push_back(v[i]);
            }
            if (v3.size()>=k){
                cout<<v3[k-1]<<"\n";
            }else cout<<-1<<"\n";
            v3.clear();
        }

    }
        
    
    return 0;
}