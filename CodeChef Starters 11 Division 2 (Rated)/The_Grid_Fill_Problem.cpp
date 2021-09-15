//                    The Grid Fill Problem
// Link - https://www.codechef.com/START11B/problems/FILLGRID


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n & 1){
            for(ll i = 0; i < n; i++){
                for(ll j = 0; j < n; j++){
                    if(i == j) cout << "-1 ";
                    else cout << "1 ";
                }cout << "\n";
            }
        }else {
            for(ll i = 0; i < n; i++){
                for(ll j = 0; j < n; j++){
                    cout << "-1 ";
                }cout << "\n";
            }
        }
    }
return 0;
}