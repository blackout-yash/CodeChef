//                      The Preparations
// Link - https://www.codechef.com/START13C/problems/SUPCHEF


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, m, n, k;
    cin >> t;
    while(t--){
        cin >> m >> n >> k;
        if(m > n*k) cout << "YES\n";
        else cout << "NO\n";
    }
return 0;
}