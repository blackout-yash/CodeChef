// Forest Gathering
// Link - https://www.codechef.com/CUPP2101/problems/FORESTGA



#include <bits/stdc++.h>
using namespace std;
long long int n, w, l;

bool check(long long int month, long long int h[], long long int r[]) {
	long long int sum = 0;
	for (long long int i = 0; i < n; i++) {
		if (h[i] + ((month) * r[i]) >= l && sum < w) sum += h[i] + ((month) * r[i]);
	}
	if (sum >= w) return true;
	else return false;
}

int main() {
	cin >> n >> w >> l;
	long long int h[n], r[n];
	for (long long int i = 0; i < n; i++) {
		cin >> h[i] >> r[i];
	}
	long long int lo = 0, hi = 1e18;
	long long int ans = 0;
	while (lo <= hi) {
		long long int mid = lo + (hi - lo) / 2;
		if (check(mid, h, r)) {
			ans = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}
	cout << ans << endl;
	return 0;
}