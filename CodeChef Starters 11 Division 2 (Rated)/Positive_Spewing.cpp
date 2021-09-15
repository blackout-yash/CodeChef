//                         Positive Spewing
// Link - https://www.codechef.com/START11B/problems/POSSPEW


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

ll count(vector <ll> v){
    ll num = 0;
    for(auto x: v){
        if(x) num++;
    }
return num;
}
 
int main(){
    ll t, n, k, sum;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll arr[n];
        sum = 0;
        vector <ll> v(n);
        fora(0,n) {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i]) v[i] = 1;
        }
        
        if(!sum) cout << "0\n";
        else if(count(v) == n) cout << sum + k*2*n << "\n";
        else {
            while(k--){
                vector <ll> temp;
                fora(0,n){
                    if(!i){
                        if(v[n-1] > 0 && v[1] > 0){
                            sum += 2;
                            temp.push_back(i);
                        }else if(v[n-1] > 0){
                            sum += 1;
                            temp.push_back(i);
                        }else if(v[1] > 0){
                            sum += 1;
                            temp.push_back(i);
                        }
                    }else if(i+1 == n){
                        if(v[n-2] > 0 && v[0] > 0){
                            sum += 2;
                            temp.push_back(i);
                        }else if(v[n-2] > 0){
                            sum += 1;
                            temp.push_back(i);
                        }else if(v[0] > 0){
                            sum += 1;
                            temp.push_back(i);
                        }
                    }else {
                        if(v[i-1] > 0 && v[i+1] > 0){
                            sum += 2;
                            temp.push_back(i);
                        }else if(v[i-1] > 0){
                            sum += 1;
                            temp.push_back(i);
                        }else if(v[i+1] > 0){
                            sum += 1;
                            temp.push_back(i);
                        }
                    }
                }
                for(auto x: temp){
                    v[x] = 1;
                }
                if(count(v) == n) break;
            }
            if(k <= 0) k = 0;
            cout << sum + k*2*n << "\n";
        }
    }
return 0;
}