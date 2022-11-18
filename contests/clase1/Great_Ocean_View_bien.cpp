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

        bool f = false;
        for (int i = n-1; i>0; i--){
            
            int value = v[i];
            for (int j = i-1; j>=0; j--){
                if (!(value >= v[j] && value>=v[0])){
                    cnt+=1;
                    break;
                }


            }
        }

        cout<< n - cnt <<'\n';
    }
    

    return 0;
}