//                      Zebra Crossing
// Link - https://www.codechef.com/COOK133B/problems/ZEBRA/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n, k;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> k >> s;

        ll count = 0;
        fora(1,n){
            if(s[i-1] != s[i]) count++;
        }

        if(count < k) cout << "-1\n";
        else {
            for(ll i = n-1; i >= 0; i--){
                if((k & 1) && s[i] != s[0]) {
                    cout << i+1 << "\n"; 
                    break;
                }else if(!(k & 1) && s[i] == s[0]) {
                    cout << i+1 << "\n"; 
                    break;
                }
            }
        }
    }
return 0;
}