//                  Maximum Points
// Link - https://www.codechef.com/problems/MAXPOINT


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, a, b, c, x, y, z;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> x >> y >> z;

        ll ans = 0;
        for(ll i = 0; i < 21; i++){
            for(ll j = 0; j < 21; j++){
                for(ll k = 0; k < 21; k++){
                    ll time = i*a + j*b + k*c;
                    if(time <= 240){
                        ans = max(ans, i*x + j*y + k*z);
                    }
                }
            }
        }cout << ans << "\n";
    }
return 0;
}