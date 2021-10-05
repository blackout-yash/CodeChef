// Sticks
// Link - https://www.codechef.com/CUPP2101/problems/STICKS



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
		int n, l = 0, b = 0, a = 0;
		cin >> n;
		map <int, int> m;
		fora(0, n) {
			int x; cin >> x;
			m[x]++;
		}

		bool flag1 = true, flag2 = true;
		for (auto it = m.rbegin(); it != m.rend(); it++) {
			if (flag2 && it->second >= 4) {
				a = it->first;
				flag2 = false;
			}

			if (it->second >= 2) {
				if (flag1) {
					l = it->first;
					flag1 = false;
				} else {
					b = it->first;
					break;
				}
			}
		}
		ll maximum = max(l * b, a * a);
		if (!maximum) cout << "-1\n";
		else cout << maximum << "\n";
	}

	return 0;
}