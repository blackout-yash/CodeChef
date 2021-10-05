// MEX-OR
// Link - https://www.codechef.com/OCT21B/problems/MEXOR



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll x; cin >> x;
        ll power = int(log2(x)) + 1;
        if (x == 1 << power) cout << x << "\n";
        else if (x + 1 == 1 << power) cout << x + 1 << "\n";
        else cout << (1 << (power - 1)) << "\n";
    }
    return 0;
}