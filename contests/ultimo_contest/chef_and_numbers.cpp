#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int calcular(int n){
    int k, sum=0;

    do
    {
        k = n%10;
        n = (int)n/10;
        sum+=k;
        
    } while (n/10!=0);
    
    cout<<sum;
    return sum;
}
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int x;
    for (int i = n; i >=0; i--){
        if ((i+calcular(i) + calcular(calcular(i)))==n){
            //cout<<i;
            break;
        }
    }

    
    return 0;
}