//                        Fake Swaps
// Link - https://www.codechef.com/COOK133B/problems/FAKESWAP


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> n >> s1 >> s2;
        ll one1 = 0, zero1 = 0;
        fora(0,n){
            if(s1[i] == '1') one1++;
            else zero1++;
        }

        ll one2 = 0, zero2 = 0;
        fora(0,n){
            if(s2[i] == '1') one2++;
            else zero2++;
        }

        if(one1 == one2 && one1 == n) cout << "YES\n";
        else if(zero1 == zero2 && zero2 == n) cout << "YES\n";
        else if(zero1 == 0 && one2 == 0) cout << "NO\n";
        else if(one1 == 0 && zero2 == 0) cout << "NO\n";
        else if(one1 > 0 && one2 == 0) cout << "NO\n";
        else if(one1 > 0 && zero2 == 0) cout << "NO\n";
        else cout << "YES\n";
    }
return 0;
}