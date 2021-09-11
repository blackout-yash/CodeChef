//                     Airline Restrictions
// Link - https://www.codechef.com/SEPT21B/problems/AIRLINE/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, d, e;
    cin >> t;
    while(t--){
        ll arr[3];
        fora(0,3) cin >> arr[i];
        cin >> d >> e;
        sort(arr, arr + 3);

        bool flag = false;
        fora(0,3){
            if(arr[2-i] <= e){
                arr[2-i] = 0;
                flag = true;
                break;
            }
        }

        ll sum = 0;
        fora(0,3) sum += arr[i];

        if(sum <= d && flag) cout << "YES\n";
        else cout << "NO\n";
    }
return 0;
}