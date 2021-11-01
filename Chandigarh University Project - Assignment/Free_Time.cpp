// Free Time
// Link - https://www.codechef.com/CUPA2101/problems/FRTIME



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fora(i,a,b) for(int i=a;i<b;i++)


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	array<int, 2> alice[n], bob[m];

	fora(i, 0, n) cin >> alice[i][0] >> alice[i][1];
	fora(i, 0, m) cin >> bob[i][0] >> bob[i][1];

	sort(alice, alice + n); sort(bob, bob + m);

	int alice_pointer = 0, bob_pointer = 0, freetime = 0;
	while ((alice_pointer < n) && (bob_pointer < m)) {
		int tempa, tempb;
		tempa = max(alice[alice_pointer][0], bob[bob_pointer][0]);
		tempb = min(bob[bob_pointer][1], alice[alice_pointer][1]);

		if (tempb > tempa) freetime = freetime + tempb - tempa;

		if (alice[alice_pointer][1] > bob[bob_pointer][1]) bob_pointer += 1;
		else alice_pointer += 1;
	}
	cout << freetime;

	return 0;
}