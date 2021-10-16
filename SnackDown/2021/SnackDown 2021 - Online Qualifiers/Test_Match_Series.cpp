// Test Match Series
// Link - https://www.codechef.com/SNCKQL21/problems/TESTSERIES



#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int ind = 0, eng = 0;
		for (int i = 0; i < 5; i++) {
			int x; cin >> x;
			if (x == 1) ind++;
			else if (x == 2) eng++;
		} if (ind > eng) cout << "INDIA\n";
		else if (ind < eng) cout << "ENGLAND\n";
		else cout << "DRAW\n";

	}
	return 0;
}