#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "hola mundo";
    int anio = 2021;
    ostringstream oss; //buffer para escribir
    oss <<s << " "<<anio;
    cout<<oss.str();
    return 0;
}