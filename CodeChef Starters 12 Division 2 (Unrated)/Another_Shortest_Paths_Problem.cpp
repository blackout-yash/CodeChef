// 			Another Shortest Paths Problem
// Link - https://www.codechef.com/problems/SPATH3/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	ll t, n, m, x, y;
	cin >> t;
	while(t--){
		cin >> n >> m >> x >> y;
		if(y >= 2*x) cout << (n+m-2)*x << "\n";
		else if(2*x > y && y > x) cout << abs(m-n)*x + min(n-1, m-1)*y << "\n";
		else cout << min(n-1, m-1)*y + ((abs(m-n)/2)*2)*y + (abs(m-n)%2)*x << "\n";
	}
return 0;
}