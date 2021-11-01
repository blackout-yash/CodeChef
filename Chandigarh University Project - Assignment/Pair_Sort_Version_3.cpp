// Pair Sort Version 3
// Link - https://www.codechef.com/CUPA2101/problems/PSORT3



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fora(i,a,b) for(int i=a;i<b;i++)

bool conditionSort(const pair<int, int> &x, const pair<int, int> &y) {
	if (x.second == y.second) return (x.first < y.first);
	else return (x.second > y.second);
}

int32_t main() {
	int n;
	cin >> n;

	vector<pair<int, int>> vect;
	int a[n], b[n];

	fora(i, 0, n) cin >> a[i];
	fora(i, 0, n) cin >> b[i];

	fora(i, 0, n) vect.push_back(make_pair(a[i], b[i]));
	sort(vect.begin(), vect.end(), conditionSort);

	fora(i, 0, n) cout << vect[i].first << " " << vect[i].second << " ";

	return 0;
}