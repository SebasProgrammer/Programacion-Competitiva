#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    char mat[100][100];

    for (int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
        
    }

    vector<int> x;
    vector<int> y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 'R'){
                x.push_back(i);
                y.push_back(j);
            }
        }
    }

    for (int i = 0; i < x.size() -1; i++)
    {
        for (int j = i+1; j < x.size(); j++)
        {
            if (x[i] == x[j]){cout<<"SI";break;return 0;}
        }
    }

    for (int i = 0; i < y.size() -1; i++)
    {
        for (int j = i+1; j < y.size(); j++)
        {
            if (y[i] == y[j]){cout<<"SI";return 0;}
        }
    }

    for (int i = 0; i < y.size() -1; i++)
    {
        for (int j = i+1; j < y.size(); j++)
        {
            if (y[i] == y[j] && x[i] == x[j]){cout<<"SI";return 0;}
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 'R'){
                for (int k = 1; k < n;k++){
                    if (i+k<4 && j+k<4 && i+k>=0 && j+k>=0){
                        if (mat[i][j] == mat[i+k][j+k]) {cout<<"SI";return 0;}
                        if (mat[i][j] ==mat[i+k][j-k]) {cout<<"SI";return 0;}

                    }
                    
                }
            }
        }
        
    }

    cout<<"NO";

    return 0;

}