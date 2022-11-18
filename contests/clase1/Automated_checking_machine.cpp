#include<bits/stdc++.h>
using namespace std;

int main(){

    int e1,e2,e3,e4,e5,e;
    while (cin>>e1>>e2>>e3>>e4>>e5)
    {
        vector<int> v1,v2;
        v1.push_back(e1);
        v1.push_back(e2);
        v1.push_back(e3);
        v1.push_back(e4);
        v1.push_back(e5);
        
        for (int i=0;i<5;i++){
            cin>>e;
            v2.push_back(e);
        }

        int sum=0;
        bool f= false;
        for (int i=0;i<5;i++){
            if (v1[i]==v2[i]){
                f= true;
                break;
            }
        
        }

        if (f){
            cout<<"N"<<'\n';
        }
        else{
            cout<<"Y"<<'\n';
        }
    }
    
    return 0;
}