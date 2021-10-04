// Simple Division
// Link - https://www.codechef.com/CUPA2101/problems/CHEDIV



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
		ll n, x, y, num, count = 0;
		cin >> n >> x >> y;
		fora(0, n) {
			cin >> num;
			if (num <= x && num % y == 0) count++;
		} cout << count << "\n";
	}
	return 0;
}