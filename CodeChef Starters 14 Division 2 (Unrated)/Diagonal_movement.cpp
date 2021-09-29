// 					Diagonal movement
// Link - https://www.codechef.com/START14B/problems/DIAGMOVE


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		ll num = abs(x - y);
		if (num & 1) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}