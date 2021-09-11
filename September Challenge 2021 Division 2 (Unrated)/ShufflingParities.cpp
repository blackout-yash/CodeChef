//                  Shuffling Parities
// Link - https://www.codechef.com/SEPT21B/problems/SHUFFLIN


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll arr[n], odd_elem = 0, even_elem = 0;
        fora(0,n) {
            cin >> arr[i];
            if(arr[i] & 1) odd_elem++;
            else even_elem++;
        }
    
        ll odd = n/2, even = n/2;
        if(n & 1) odd++;

        cout << min(odd, even_elem) + min(even, odd_elem) << "\n";
    }
return 0;
}