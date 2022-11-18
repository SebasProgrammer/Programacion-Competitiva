#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    fast_io;
    int n;
    string s;
    int ls=11, li=-1;
    while(cin>>n)
    {
        if (n==0) exit(0);
        cin.ignore();
        getline(cin,s);

        if (s[4] == 'h'){
            ls = min(n, ls);
        }
        if (s[4]== 'l') {
            li = max(li,n);
        }
        if (s[0]=='r'){
            if (li>=ls || li>=n || ls<=n){
                cout<<"Stan is dishonest"<<"\n";
            } else{
                cout<<"Stan may be honest"<<"\n";
            }
            ls=11; li=-1;
        }
    }
    return 0;
}