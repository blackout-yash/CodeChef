//                    Maximum Light Up
// Link - https://www.codechef.com/START13C/problems/DIWALI1


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, p, a, b, c, x, y;
    cin >> t;
    while(t--){
        cin >> p >> a >> b >> c >> x >> y;
        ll anar = x*a, chakri = y*a;
        ll maxAnar = p/(anar+b), maxChakri = p/(chakri+c);
        cout << max(maxAnar, maxChakri) << "\n";
    }
return 0;
}