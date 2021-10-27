// ChefWatson uses Social Network
// Link - https://www.codechef.com/CUPP2101/problems/BOOKCHEF



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
	int special[n];
	fora(i, 0, n) cin >> special[i];
	sort(special, special + n);

	int s, p; string str;
	vector <pair <int, string>> v1, v2;
	fora(i, 0, m) {
		cin >> s >> p >> str;
		if (binary_search(special, special + n, s)) v1.push_back(make_pair(p, str));
		else v2.push_back(make_pair(p, str));
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = v1.size() - 1; i >= 0; --i) cout << v1[i].second << "\n";
	for (int i = v2.size() - 1; i >= 0; --i) cout << v2[i].second << "\n";

	return 0;
}