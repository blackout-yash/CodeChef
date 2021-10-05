// Racing Horses
// Link - https://www.codechef.com/CUPP2101/problems/HORSES



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll arr[n];
		fora(0, n) cin >> arr[i];

		ll minimum = INT_MAX;
		for (int i = 0; i < n - 1; ++i) {
			for (int j = i + 1; j < n; ++j) {
				minimum = min(minimum, abs(arr[i] - arr[j]));
			}
		} cout << minimum << "\n";
	}

	return 0;
}