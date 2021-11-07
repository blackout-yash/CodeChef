// Queries in an Array
// Link - https://www.codechef.com/CUPA2101/problems/ARRQUERY



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fora(i,a,b) for(int i=a;i<b;i++)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, q;
	cin >> n >> q;
	int arr[n];
	fora(i, 0, n) cin >> arr[i];

	int l, r, x;
	while (q--) {
		cin >> l >> r >> x;

		auto it = lower_bound(arr + (l - 1), arr + r, x);
		int index = it - arr;

		cout << r - index << "\n";
	}
	return 0;
}