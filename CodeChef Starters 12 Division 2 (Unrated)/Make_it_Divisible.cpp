//                        Make it Divisible
// Link - https://www.codechef.com/START12B/problems/MAKEDIV3


#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    if(n == 1) cout << "3\n";
	    else {
	        cout << "1";
	        for(int i = 0; i < n-2; i++) cout << "0";
	        cout << "5\n";
	    }
	}
	return 0;
}