//              Second Max of Three Numbers
// Link - https://www.codechef.com/CUPP2101/problems/SNDMAX



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        ll minimum = min(a, min(b, c)), maximum = max(a, max(b, c));
        cout << (a+b+c) - (maximum+minimum) << "\n";
    }
return 0;
}