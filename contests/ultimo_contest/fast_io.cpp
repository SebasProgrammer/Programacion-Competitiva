#include<bits/stdc++.h>
using namespace std;

int main(){
    //el buffer se limpia usando endl y cin
    //sin embargo quita tiempo
    ios::sync_with_stdio(0);//evitamos usar librerias de C
    cin.tie(0);//hacemos que no limpie el buffer
//////////////////////////////////////////////////////
    int x;
    for (size_t i = 0; i < 3; i++)
    {
        cin>>x;
        // mira la diferencia cambiando a endl
        cout<<x<<endl; 
    }
///////////////////////////////////////////////////////
    
    
    return 0;
}