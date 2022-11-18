#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;

    while (tc--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        vector<char> se;
        se.push_back(s[0]);
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i]!=s[i+1]){
                se.push_back(s[i+1]);
            }
        }
        vector<int> fre(se.size());
        for (size_t i = 0; i < se.size(); i++)
        {
            fre[i] = count(s.begin(), s.end(),se[i]);
        }
        
        while (q--)
        {
            int c;
            cin>>c;
            int sum=0, cn=0;
            for (size_t i = 0; i < fre.size(); i++)
            {
                if (fre[i]>c){sum+=(fre[i]-c);}
            }
            
            cout<<sum<<'\n';  
        }
    }
    

    return 0;
}