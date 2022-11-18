#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> s;
    s.insert(1);
    s.insert(10);
    
    auto r = s.find(1);

    if (r== s.end()){cout<<"no esta";}
    
    cout<< *s.end();
    return 0;
}