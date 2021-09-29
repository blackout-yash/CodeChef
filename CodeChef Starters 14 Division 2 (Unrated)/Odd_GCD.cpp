// 						 Odd GCD
// Link - https://www.codechef.com/START14B/problems/BININVER



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		ll num, odd = 0, even = INT_MAX;
		fora(0, n) {
			cin >> num;
			if (num & 1) odd++;
			else {
				ll count = 0;
				while (num != 1) {
					count++;
					num /= 2;
					if (num & 1) break;
				} even = min(even, count);
			}
		}
		if (odd) cout << "0\n";
		else cout << even << "\n";
	}
	return 0;
}