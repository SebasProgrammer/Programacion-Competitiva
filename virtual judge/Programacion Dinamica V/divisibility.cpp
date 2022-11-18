#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define MAXK 100
#define MAXN 10000

//17 5 -21 15
vi A;
int k;
int memo[MAXN+1][MAXK+1]; //¿que pasa si s es negativo, no se puede tener un tamaño negativo
//Por eso aplicamos módulo
//Ejemplo 5%3-> 5 = 3*1+2->resto=2, 5 = 3*2-1->resto=-1
//hay que convertir modulos negativos a positivos
//Solución: para resto=-1 con k=3: (-1+k)%k=2

int mod_pos(int x) {
    return ((x % k) + k) % k;
}

int f(int n,int s){
    if (n==0){
        if (s == 0) return 1;
        return 0;
    }
    int &ret = memo[n][s];
    if (ret!=-1) return ret;
    //tomamos el e-nésimo con +
    ret = f(n-1, mod_pos(s + A[n-1]));
    //tomamos el e-nésimo con - 
    //Además, no vale para el 1er elem porque siempre debe ser positivo
    if (n>1)
        ret = ret || f(n-1, mod_pos(s - A[n-1]));
    return ret;
}
    
int main(){
    fast_io;
    int n,m,l;
    cin>>m;
    int suma =0;
    while (m--)
    {
        A.clear();
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            cin>>l;
            A.push_back(l);
        }
        memset(memo,-1,sizeof(memo));
        if (f(n,suma)) cout<<"Divisible\n";
        else cout<<"Not divisible\n";
    }
        
    
    return 0;
}