// Is this Knapsack
// Link - https://www.codechef.com/CUPA2101/problems/SACKNAP



#include <bits/stdc++.h>
using namespace std;

int main() {
	long long test_cases;
	cin >> test_cases;
	while (test_cases--) {
		long long size, i, capacity, atleast_k;

		cin >> size >> capacity >> atleast_k;

		long long array[size];

		for (i = 0; i < size; i++) cin >> array[i];

		long long count = 0, sum = 0, finalAns = 0, j;

		for (i = 0; i < size; i++) {
			count = 0;
			sum = 0;
			for (j = i; j < size; j++) {
				sum = sum + array[j];
				count++;
				if (sum > capacity) {
					sum = sum - array[j];
					count--;
					break;
				}
			}
			if (sum < atleast_k) {
				count = 0;
			}
			finalAns = max(count, finalAns);
		}
		cout << finalAns << endl;
	}
	return 0;
}