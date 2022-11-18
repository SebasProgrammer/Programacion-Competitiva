#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    while (cin>>n)
    {
        int cnt=0;
        vector<int> v(6);
        for (size_t i = 1; i <= 5; i++)
        {
            cin>>k;
            v[i] = k;
        }

        for (size_t i = 1; i <= 5; i++)
        {
            if (n==v[i]){
                cnt+=1;
            }
        }

        cout<<cnt<<'\n';


    }
    


    return 0;
}