//                       Obtain the Sum
// Link - https://www.codechef.com/START11B/problems/BIGARRAY


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll sum;
        if(n & 1){
            sum = n * ((n+1)/2);
        }else sum = (n/2)*(n+1);

        ll diff = sum - k;
        if(diff <= 0 || diff > n) cout << "-1\n";
        else cout << diff << "\n";
    }
return 0;
}
