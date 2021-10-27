// Missing a Point
// Link - https://www.codechef.com/CUPP2101/problems/PTMSSNG



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
		int n, a, b;
		cin >> n;

		map <int, int> x, y;
		fora(i, 1, 4 * n) {
			cin >> a >> b;
			x[a]++;
			y[b]++;
		}

		for (auto it = x.begin(); it != x.end(); it++) {
			if (it->second & 1) {
				cout << it->first << " ";
				break;
			}
		}

		for (auto it = y.begin(); it != y.end(); it++) {
			if (it->second & 1) {
				cout << it->first << "\n";
				break;
			}
		}
	}

	return 0;
}