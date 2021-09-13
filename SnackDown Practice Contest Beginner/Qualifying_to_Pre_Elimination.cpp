//              Qualifying to Pre-Elimination
// Link - https://www.codechef.com/SDPCB21/problems/QUALPREL


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector <ll> v(n);
        fora(0,n){
            ll num; cin >> num;
            v[i] = num;
        }
        sort(v.begin(), v.end(), greater <int> ());
        ll key = v[k-1];
        auto it = upper_bound(v.begin(), v.end(), key, greater <int> ());
        cout << it - v.begin() << "\n";
    }
return 0;
}