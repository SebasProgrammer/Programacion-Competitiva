#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s,d;
    cin>>s>>d;

    if (s<d) {cout<<"inconsistente";return 0;}

    if (s>100 || d>100){cout<<"inconsistente";return 0;}
    
    if (s<0 || d<0){cout<<"inconsistente";return 0;}

    if ((s+d)%2!=0){cout<<"inconsistente";return 0;}


    int r;
    r = (s+d)/2;

    if (r<0 || (s-r)<0) {cout<<"inconsistente";return 0;}

    if (r>(s-r)){
        cout<<r<<" "<<s-r;
    }else
    {
        cout<<s-r<<" "<<r;
    }
    
    
    return 0;
}