// Stacks
// Link - https://www.codechef.com/CUPP2101/problems/STACKS



#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		vector < long long > s;
		for (int i = 0; i < n; i++) {
			auto it = upper_bound(s.begin(), s.end(), a[i]);
			if (it != s.end()) *it = a[i];
			else s.push_back(a[i]);
		}

		cout << s.size() << " ";
		for (int i = 0; i < s.size(); i++) {
			cout << s[i] << " ";
		} cout << "\n";
	}
	return 0;
}
