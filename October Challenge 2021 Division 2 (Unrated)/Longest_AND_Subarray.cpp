// 				Longest AND Subarray
// Link - https://www.codechef.com/OCT21B/problems/ANDSUBAR



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;

		ll power = log2(n);
		if (n == 1) cout << "1\n";
		else if (1 << power == n) cout << (1 << (power - 1)) << "\n";
		else {
			ll lower = 1 << power;
			ll ans = (n - lower) + 1;
			ll temp = 1 << (power - 1);
			cout << max(temp, ans) << "\n";
		}
	}
	return 0;
}