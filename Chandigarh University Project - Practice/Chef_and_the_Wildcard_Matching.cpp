//              Chef and the Wildcard Matching
// Link - https://www.codechef.com/CUPP2101/problems/TWOSTR


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        bool flag = true;
        fora(0, x.size()){
            if(x[i] == '?' || y[i] == '?') continue;
            else if(x[i] != y[i]){
                cout << "No\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes\n";
    }
return 0;
}