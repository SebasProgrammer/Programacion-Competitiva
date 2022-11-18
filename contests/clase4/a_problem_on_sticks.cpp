#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        set<int> s;
        int a;
        for (int i = 0; i < n; i++){
            cin >> a;
            if(a > 0) s.insert(a);
        }
        cout << s.size() << "\n";
    }

    return 0;
}