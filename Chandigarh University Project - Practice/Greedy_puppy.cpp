#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;

        ll maximum = 0;
        fora(1, 1+k) maximum = max(maximum, n % i);
        
        cout << maximum << "\n";
    }
return 0;
}