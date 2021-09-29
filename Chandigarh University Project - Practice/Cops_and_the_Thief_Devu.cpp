//              Cops and the Thief Devu
// Link - https://www.codechef.com/CUPP2101/problems/COPS 



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, m, x, y;
    cin >> t;
    while(t--){
        cin >> m >> x >> y;
        ll arr[m];
        fora(0,m) cin >> arr[i];
        sort(arr, arr+m);

        vector <ll> v;
        fora(0,m){
            ll min = arr[i] - x*y;
            ll max = arr[i] + x*y;

            if(min < 1) min = 1;
            if(max > 100) max = 100;

            if(i){
                if(v[v.size()-1] < min) v.push_back(min);
                else v.push_back(v[v.size()-1]);
            }else v.push_back(min);

            v.push_back(max);
        }
        
        ll ans = v[0]-1;
        ans += 100-v[v.size()-1];

        fora(1,v.size()-1){
            ll diff = v[i+1] - v[i]; diff--;
            if(v[i] == 100 || v[i+1] == 100) diff = 0; 
            if(diff > 0) ans += diff; i++;
        }cout << ans << "\n";
    }
return 0;
}