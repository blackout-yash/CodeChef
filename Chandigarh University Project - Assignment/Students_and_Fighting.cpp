// Students and Fighting
// Link - https://www.codechef.com/CUPA2101/problems/STUFIGHT



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
		int n;
		cin >> n;
		map <int, int> m;
		fora(i, 0, n) {
			int x; cin >> x;
			m[x]++;
		}

		if (m.rbegin()->second > 1) cout << "fight:(\n";
		else cout << "peace:)\n";
	}
	return 0;
}