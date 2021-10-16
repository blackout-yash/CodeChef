// Lucky Number
// Link - https://www.codechef.com/SNCKQL21/problems/LUCKYNUM



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fora(i,a,b) for(int i=a;i<b;i++)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 7 || b == 7 || c == 7) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}