// The Smallest Pair
// Link - https://www.codechef.com/CUPP2101/problems/SMPAIR



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fora(i,a,b) for(int i=a;i<b;i++)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n;
		map <int, int> m;
		fora(i, 0, n) {
			cin >> x;
			m[x]++;
		}

		if (m.begin()->second >= 2) cout << 2 * (m.begin()->first) << "\n";
		else cout << m.begin()->first + (++m.begin())->first << "\n";
	}

	return 0;
}