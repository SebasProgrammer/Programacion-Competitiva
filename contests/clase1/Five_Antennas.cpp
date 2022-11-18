#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r", stdin);
    //freopen("out.txt", "w", stdout);
    int l;
    vector<int> v;
    while (cin>>l)
    {
        v.push_back(l);
    }

    int last = v[v.size()-1];
    v.pop_back();

    bool f = false;
    for (int i=v.size()-1; i>0;i--){
        int resta =0;
        for (int j=0; j<v.size();j++){
            resta = v[i] - v[j];

            if (resta>last){
                f =true;
                break;
                
            }
        }
    }

    if (f){
        cout<<":(";
    }
    else{
    cout<<"Yay!";
    }
    

    return 0;
}