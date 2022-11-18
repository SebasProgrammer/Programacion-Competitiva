#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin>> n;
    vector<int> v(n);                  
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int cnt=0; 

    for (size_t i = 0; i < n-2; i++)
    {
        if ((v[i+1]>v[i] && v[i+1] < v[i+2]) || (v[i] > v[i+1] && v[i+1] > v[i+2])){
            cnt+=1;
        }
    }
    
    cout<<cnt;


    return 0; 
}