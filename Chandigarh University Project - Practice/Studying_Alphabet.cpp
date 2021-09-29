//                     Studying Alphabet
// Link - https://www.codechef.com/CUPP2101/problems/ALPHABET


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    map <char, ll> m;
    fora(0, s.size()) m[s[i]]++;

    ll t;
    cin >> t;
    while(t--){
        cin >> s;
        bool flag = true;
        fora(0,s.size()){
            if(m[s[i]] == 0){
                cout << "No\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes\n";
    }
return 0;
}