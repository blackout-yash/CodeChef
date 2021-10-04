// Balanced Brackets
// Link - https://www.codechef.com/CUPA2101/problems/BALBRACK



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
		ll n, open = 0, close = 0; string s;
		cin >> n >> s;
		fora(0, n) {
			if (s[i] == '(') open++;
			else close++;
		} cout << min(open, close) * 2 << "\n";
	}

	return 0;
}