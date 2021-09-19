//                     Adjacency Hatred
// Link - https://www.codechef.com/COOK133B/problems/ADJHATE


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector <ll> oddarr, evenarr;
        ll odd = 0, even = 0, x;
        fora(0,n){
            cin >> x;
            if(x&1) oddarr.push_back(x);
            else evenarr.push_back(x);
        }

        odd = oddarr.size(); even = evenarr.size();
        if(odd == 1 && even == 1) cout << oddarr[0] << " " << evenarr[0];
        else if(odd == 2 && even == 1) cout << oddarr[0] << " " << oddarr[1] << " " << evenarr[0];
        else if(even == 2 && odd == 1) cout << evenarr[0] << " " << evenarr[1] << " " << oddarr[0];
        else if(odd > even && even > 1 && odd > 1){
            cout << oddarr[0] << " " << evenarr[0] << " ";
            fora(1,odd) cout << oddarr[i] << " ";
            fora(1,even) cout << evenarr[i] << " ";
        }else if(odd <= even && even > 1 && odd > 1){
            cout << evenarr[0] << " " << oddarr[0] << " ";
            fora(1,even) cout << evenarr[i] << " ";
            fora(1,odd) cout << oddarr[i] << " ";
        }else cout << "-1";
        cout << "\n";
    }
return 0;
}