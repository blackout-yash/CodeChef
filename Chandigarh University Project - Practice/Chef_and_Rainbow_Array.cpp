//                  Chef and Rainbow Array
// Link - https://www.codechef.com/CUPP2101/problems/RAINBOWA


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll arr[n], sum = 0; set <ll> s;
        fora(0,n) {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        for(auto x: s) sum += x;

        if(sum != 28) cout << "no\n";
        else if(n & 1){
            ll j = n-1; bool flag = true;
            fora(0,n/2){
                if(arr[i] != arr[j] || arr[0] != 1 || (i && abs(arr[i-1] - arr[i]) > 1)){
                    cout << "no\n";
                    flag = false;
                    break;
                }j--;
            }if(flag) cout << "yes\n";
        }else {
            ll j = n-1, temp = 1; bool flag = true;
            fora(0,n/2){
                if(arr[i] != arr[j] || arr[0] != 1 || (i && abs(arr[i-1] - arr[i]) > 1)){
                    cout << "no\n";
                    flag = false;
                    break;
                }j--;
            }if(flag) cout << "yes\n";
        }
    }
return 0;
}