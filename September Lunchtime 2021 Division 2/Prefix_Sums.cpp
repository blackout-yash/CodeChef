//                          Prefix Sums
// Link - https://www.codechef.com/LTIME100B/problems/UNQEQ



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if((n/2)%2 != 0) cout << "NO\n";
		else {
			cout << "YES\n";
			ll num = 1;
			fora(0,n/2){
				cout << num << " ";
				num += 2;
				if(i+1 == n/4) num++;
			}cout << "\n";
			num = 2;
			fora(0,n/2){
				cout << num << " ";
				num += 2;
				if(i+1 == n/4) num--;
			}cout << "\n";
		}
	}
return 0;
}