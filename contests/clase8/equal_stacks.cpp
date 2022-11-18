#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n1, n2, n3, k;
    cin>>n1>>n2>>n3;
    if (n1<1 || n2<1 || n3<1) {cout<<0;}
    queue<int> v1,v2,v3;
    int sum1=0,sum2=0, sum3=0;
    for (size_t i = 0; i < n1; i++)
    {
        cin>>k;
        sum1+=k;
        v1.push(k);
    }
    for (size_t i = 0; i < n2; i++)
    {
        cin>>k;
        sum2+=k;
        v2.push(k);
    }
    for (size_t i = 0; i < n3; i++)
    {
        cin>>k;
        sum3+=k;
        v3.push(k);
    }
    int mn;
    while ((sum1!= sum2 && sum2!=sum3) && (!v1.empty() && !v2.empty() && !v3.empty()))
    {
        mn = min(sum1,sum2);
        mn = min(mn,sum3);
        if (sum1> mn){
            sum1-=v1.front();
            v1.pop();
        }
        if (sum2> mn){
            sum2-=v2.front();
            v2.pop();
        }
        if (sum3> mn){
            sum3-=v3.front();
            v3.pop();
        }
    }
    cout<<sum1;
    return 0;
}