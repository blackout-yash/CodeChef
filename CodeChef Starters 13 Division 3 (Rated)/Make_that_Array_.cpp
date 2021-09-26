//                 Make that Array!
// Link - https://www.codechef.com/problems/SWAPGAME


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll num, ans = 0;
        fora(0,n){
            cin >> num;
            ans -= num*(i+1);
        }
        fora(0,n){
            cin >> num;
            ans += num*(i+1);
        }cout << ans << "\n";
    }
return 0;
}