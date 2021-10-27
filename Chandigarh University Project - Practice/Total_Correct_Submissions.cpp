// Total Correct Submissions
// Link - https://www.codechef.com/CUPP2101/problems/TOTCRT



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
		map <string, int> m;

		string s; int x;
		fora(i, 0, 3 * n) {
			cin >> s >> x;
			m[s] += x;
		}

		vector <int> v;
		for (auto it = m.begin(); it != m.end(); it++) v.push_back(it->second);
		sort(v.begin(), v.end());

		for (auto x : v) cout << x << " ";
		cout << "\n";
	}

	return 0;
}