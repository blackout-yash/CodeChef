// Chopsticks
// Link - https://www.codechef.com/CUPP2101/problems/TACHSTCK



#include <bits/stdc++.h>
using namespace std;
#define ll int
#define fora(a,b) for(ll i=a;i<b;i++)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, d, count = 0;
	cin >> n >> d;
	int arr[n];
	fora(0, n) cin >> arr[i];
	sort(arr, arr + n);

	fora(1, n) {
		if (arr[i - 1] != -1 && arr[i] - arr[i - 1] <= d) {
			count++;
			arr[i] = -1;
		}
	} cout << count << "\n";
	return 0;
}