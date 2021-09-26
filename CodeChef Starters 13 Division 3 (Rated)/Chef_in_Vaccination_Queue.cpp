//                  Chef in Vaccination Queue
// Link - https://www.codechef.com/START13C/problems/VACCINQ



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, p, x, y;
    cin >> t;
    while(t--){
        cin >> n >> p >> x >> y;
        ll num, time = 0;
        fora(0,n){
            cin >> num;
            if(i+1 <= p){
                if(num) time += y;
                else time += x;
            }
        }cout << time << "\n";
    }
return 0;
}