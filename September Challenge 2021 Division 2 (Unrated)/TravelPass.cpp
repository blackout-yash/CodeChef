//                    Travel Pass
// Link - https://www.codechef.com/SEPT21B/problems/TRAVELPS


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n, a, b;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> a >> b >> s;

        ll one = 0, zero = 0;
        fora(0,n){
            if(s[i]-'0')one++;
            else zero++;
        }

        cout << zero*a + one*b << "\n";
    }
return 0;
}