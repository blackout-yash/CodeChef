//                          XOR Equal 
// Link - https://www.codechef.com/SEPT21B/problems/PALINT


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll t, n, x, num;
    cin >> t;
    while(t--){
        cin >> n >> x;
        map <ll, ll> m, temp;
        fora(0,n){
            cin >> num;
            m[num]++;
            temp[(num^x)]++;
        }

        ll operation = 0, size = INT_MIN;
        map <ll, ll> :: iterator it;

        for(it = m.begin(); it != m.end(); it++) size = max(size, it->second);
    
        if(x){ 
            for(it = temp.begin(); it != temp.end(); it++){
                ll range = it->second + m[it->first];
                if(range == size && (it->second) < operation){
                    operation = it->second;
                }else if(range > size){
                    size = range;
                    operation = it->second;
                }
            }
        }
        cout << size << " " << operation << "\n";
    }
return 0;
}