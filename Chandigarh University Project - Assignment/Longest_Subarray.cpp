// Longest Subarray
// Link - https://www.codechef.com/CUPA2101/problems/CHEFSUB



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
		int n, x, count = 0, maximum = INT_MIN;
		cin >> n;
		fora(i, 0, n) {
			cin >> x;
			if (!(x & 1)) count++;
			if (x & 1 || i + 1 == n) {
				maximum = max(maximum, count);
				count = 0;
			}
		} cout << maximum << "\n";
	}

	return 0;
}