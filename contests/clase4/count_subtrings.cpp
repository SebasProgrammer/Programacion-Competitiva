#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while (tc--)
    {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        long long cn=0;
        for (size_t i = 0; i <= n; i++)
        {
            if (s[i]=='1') {cn+=1;}
        }
        
        cout<<cn*(cn+1)/2<<'\n';
    }
    

    return 0;
}