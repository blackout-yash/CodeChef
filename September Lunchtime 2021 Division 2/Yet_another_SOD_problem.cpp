//                  Yet another SOD problem
// Link - https://www.codechef.com/LTIME100B/problems/SOD3



#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll t, a, b;
	cin >> t;
	while(t--){
	    cin >> a >> b;
	    if(a > b) swap(a, b);
	    ll ans = b/3 - a/3;
	    if(a % 3 == 0) ans++;
	    cout << ans << "\n";
	}
	return 0;
}
