//                    Snake Procession
// Link - https://www.codechef.com/CUPP2101/problems/SNAKPROC


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> s; 

        ll h = 0, t = 0; bool flag = true;
        fora(0, n){
            if(h > 1 || h < 0){
                cout << "Invalid\n";
                flag = false;
                break;
            }else if(s[i] == 'H') h++;
            else if(s[i] == 'T') h--;
        }
        if(flag){
            if(h == 0) cout << "Valid\n";
            else cout << "Invalid\n";
        }
    }
return 0;
}