// 		Fixed number of Fixed Points
// Link - https://www.codechef.com/problems/FIXFIX


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (k + 1 == n) cout << "-1\n";
		else {
			fora(1, k + 1) cout << i << " ";

			if ((n - k) & 1) {
				bool flag = true;
				fora(k + 1, n - 2) {
					if (flag) {
						cout << i + 1 << " ";
						flag = false;
					} else {
						cout << i - 1 << " ";
						flag = true;
					}
				}
				cout << n << " " << n - 2 << " " << n - 1;
			} else {
				bool flag = true;
				fora(k + 1, n + 1) {
					if (flag) {
						cout << i + 1 << " ";
						flag = false;
					} else {
						cout << i - 1 << " ";
						flag = true;
					}
				}
			} cout << "\n";
		}
	}

	return 0;
}