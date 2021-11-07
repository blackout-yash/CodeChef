// Snake Eating
// Link - https://www.codechef.com/CUPP2101/problems/SNAKEEAT



#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		vector<long long int>s(n);
		vector<long long int>pre(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		sort(s.begin(), s.end());

		for (int i = 0; i < n; i++) {
			if (i == 0) {
				pre[i] = s[i];
			} else {
				pre[i] = pre[i - 1] + s[i];
			}
		}

		for (int o = 0; o < q; o++) {
			long long int k;
			cin >> k;
			long long int i = 0, j = n - 1;
			while (i < j) {
				int mid = i + (j - i) / 2;
				if (s[mid] < k) {
					i = mid;
				} else {
					j = mid - 1;
				}

				if (j == i + 1) {
					if (s[j] < k) {
						i = j;
					} else {
						j = i;
					}
				}
			}

			if (i == 0) {
				if (s[i] >= k) {
					cout << n << "\n";
					continue;
				} else {
					cout << n - 1 << "\n";
					continue;
				}
			} else if (i == n - 1) {
				if (s[i] >= k) {
					cout << n << "\n";
					continue;
				}
			}

			int ans = n - (i + 1);
			int x = 0, y = i, temp = 0;
			while (x < y) {
				long long int mid = x + (y - x) / 2;
				long long int req = (k * (i - mid)) - (pre[i] - pre[mid]);
				if ((mid + 1) < req) {
					x = mid + 1;
				} else {
					temp = (i - mid);
					y = mid;
				}
			}
			cout << ans + temp << "\n";

		}
	}
	return 0;
}