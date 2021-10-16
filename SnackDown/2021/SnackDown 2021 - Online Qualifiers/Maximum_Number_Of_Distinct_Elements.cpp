// Maximum Number Of Distinct Elements
// Link - https://www.codechef.com/SNCKQL21/problems/MAXDISTKT



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
		vector <pair<int, int>> v;
		fora(i, 0, n) {
			int x; cin >> x;
			v.push_back(make_pair(x, i));
		} sort(v.begin(), v.end());

		int a[n], max, temp = 0;
		fora(i, 0, n) {
			max = v[i].first - 1;
			if (max >= temp) {
				a[v[i].second] = v[i].first + temp;
				temp++;
			} else a[v[i].second] = 0;
		}

		fora(i, 0, n) cout << a[i] << " ";
		cout << "\n";

	}
	return 0;
}