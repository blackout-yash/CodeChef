// Maximum Weight Difference
// Link - https://www.codechef.com/CUPP2101/problems/MAXDIFF



#include <bits/stdc++.h>
using namespace std;
#define ll int
#define fora(a,b) for(ll i=a;i<b;i++)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n, k, sum = 0, sumK = 0, sumNK = 0;
		cin >> n >> k;
		int arr[n];
		fora(0, n) {
			cin >> arr[i];
			sum += arr[i];
		} sort(arr, arr + n);

		fora(0, k) sumK += arr[i];
		fora(0, n - k) sumNK += arr[i];

		cout << max(abs(sum - 2 * sumK), abs(sum - 2 * sumNK)) << "\n";
	}

	return 0;
}