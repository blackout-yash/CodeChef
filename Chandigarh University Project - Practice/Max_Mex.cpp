// Max Mex
// Link - https://www.codechef.com/CUPP2101/problems/MEX



#include <bits/stdc++.h>
using namespace std;
#define ll int
#define fora(a,b) for(ll i=a;i<b;i++)

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k, maximum = INT_MIN;
        cin >> n >> k;
        map <int, int> m;
        fora(0, n) {
            int x; cin >> x;
            m[x]++;
            maximum = max(maximum, x);
        }

        ll num = -1; auto it = m.begin();
        fora(0, maximum + 1) {
            if (i == it->first) it++;
            else {
                if (!k) {
                    num = i;
                    k--;
                    break;
                } else k--;
            }
        }
        if (k == -1) cout << num << "\n";
        else cout << maximum + k + 1 << "\n";
    }
    return 0;
}