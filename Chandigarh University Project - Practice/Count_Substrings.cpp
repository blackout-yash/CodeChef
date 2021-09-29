//                  Count Substrings
// Link - https://www.codechef.com/CUPP2101/problems/CSUB


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> s;

        vector <ll> v; ll count = 0;
        fora(0,n){
            if(s[i] == '1') count++;
            if(s[i] == '0' || i+1 == n) {
                if(count) v.push_back(count);
                count = 0;
            }
        }

        ll sum[v.size()] = {0}, temp = 0;
        if(v.size() > 1){
            for(ll i = v.size()-2; i >= 0; i--){
                sum[i] = temp + v[i+1];
                temp = sum[i];
            }
        }

        ll ans = 0;
        for(auto x: v) ans += (x*(x+1))/2;
        
        if(v.size() > 1){
            for(ll i = v.size()-2; i >= 0; i--){
                ans += v[i]*sum[i];
            }
        }
        cout << ans << "\n";
    }
return 0;
}