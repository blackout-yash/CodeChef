// 						Digit Removal
// Link - https://www.codechef.com/OCT21B/problems/DIGITREM



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t, n, k;
	cin >> t;
	while(t--){
		string s;
		cin >> s >> k;
		n = stoi(s);
		if(!k){
			bool flag = false;
			for (int i = 0; i < s.size(); ++i){
				if(flag) s[i] = '1';
				else if(s[i] == k+'0') {
					s[i] = '1';
					flag = true;
				}
			}
			ll ans = stoi(s);
			cout << ans - n << "\n";
		}
		else if(k == 9){
			string temp;
			temp.push_back('0');
			for (int i = 0; i < s.size(); ++i) temp.push_back(s[i]);
			bool flag = false; 
			for (int i = 1; i < temp.size(); ++i){
				if(flag) temp[i] = '0';
				else if(temp[i] == k +'0'){
					int num = temp[i-1]; num++;
					temp[i-1] = char(num);
					temp[i] = '0';
					flag = true;
					if(temp[i-1] == '9') {
						i -= 2; flag = false;
					}
				}
			}
			ll ans = stoi(temp);
			cout << ans - n << "\n";
		}else {
			bool flag = false;
			for (int i = 0; i < s.size(); ++i){
				if(flag) s[i] = '0';
				else if(s[i] == k+'0'){
					s[i] = k+'1';
					flag = true;
				}
			}
			ll ans = stoi(s);
			cout << ans - n << "\n";
		}
	}

	return 0;
}