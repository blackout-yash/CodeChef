// Alternating Subsequences
// Link - https://www.codechef.com/CUPA2101/problems/CHEFALT



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
		ll n, num, sumOdd = 0, sumEven = 0;
		cin >> n;

		fora(0, n) {
			cin >> num;
			if (i & 1) sumEven += num;
			else sumOdd += num;
		} cout << max(sumEven, sumOdd) << "\n";
	}

	return 0;
}