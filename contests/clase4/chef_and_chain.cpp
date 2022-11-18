#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while (tc--)
    {
        string s;
        cin>>s;
        int cn=0, cn2=0;
        string s1,s2;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (i%2==0){
                s1+='+';
                s2+='-';
            }
            else
            {
                s1+='-';
                s2+='+';
            }
            
        }
        
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i]!= s1[i]){
                cn+=1;
            }
            if (s[i]!=s2[i]){
                cn2+=1;
            }
        }
        int best = min(cn,cn2);
        cout<<best<<'\n';
                
    }
    return 0;
}