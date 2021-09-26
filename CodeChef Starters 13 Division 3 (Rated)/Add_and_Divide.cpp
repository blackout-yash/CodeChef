//                         Add and Divide
// Link - https://www.codechef.com/START13C/problems/ADDNDIV


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        while(true){
            ll g = gcd(a, b);
            a /= g;
            if(g == 1){
                if(a == 1) cout << "YES\n";
                else cout << "NO\n";
                break;
            }
        }
    }
return 0;
}