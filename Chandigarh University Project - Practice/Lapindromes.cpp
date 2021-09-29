//                          Lapindromes 
// Link - https://www.codechef.com/CUPP2101/problems/LAPIN


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        map <char, ll> m;
        fora(0,s.size()/2) m[s[i]]++;

        ll n = s.size()/2;
        if(s.size()&1) n++;
        fora(n,s.size()) m[s[i]]--;

        bool flag = true;
        for(auto it: m){
            if(it.second != 0){
                cout << "NO\n";
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
    }
return 0;
}