// Qualifying to Pre-Elimination
// Link - codechef.com/CUPP2101/problems/QUALPREL



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
		int n, k;
		cin >> n >> k;
		int arr[n];
		fora(i, 0, n) cin >> arr[i];
		sort(arr, arr + n);

		k = n - k;
		auto it = lower_bound(arr, arr + n, arr[k]);
		cout << n - (it - arr) << "\n";
	}
	return 0;
}